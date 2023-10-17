/*
 * mainWortlaengenstatistik.c
 *
 *  Created on: 14.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>

#include "Haeufigkeitsanalyse.h"
#define MAX_LEN_TEXT		512
#define MAX_LEN_TEMP		30
#define MAX_LEN_WORDS		512
#define MAX_LEN_COUNTER		512

int main(int argc, char* argv[]){
	char text[MAX_LEN_TEXT] = "Wenn Fliegen hinter Fliegen fliegen, fliegen Fliegen Fliegen nach.";
	char temp[MAX_LEN_TEMP] = "";
	char words[MAX_LEN_WORDS] = "1";
	int counter[MAX_LEN_COUNTER] = {0};
	int ende = 0; // 0 = false
	int textIndex = 0;
	int tempIndex = 0;
	int wordCounter = 0;
	int i;
	int j;
	int found;

	while (ende == 0){
		int wordLen = readWord(&textIndex, &tempIndex, text, temp); // Funktion

		skipDelimiters(&textIndex, text); // Funktion

		i = 0;
		j = 0;
		found = 0; //false

		if (wordCounter == 0){
			saveFirstWord(&i, &j, &wordCounter, words, temp, counter); //Funktion
		}
		else{
			while (words[i] != '\0'){
				while ((temp[j] == words[i + j])){
					j += 1;
				}
				if (((j == wordLen) && (words[i - 1] == '1')) && ((words[i + j] == '1') || (words[i + j] == '\0'))) {
					wordFound(&i, &j, &wordLen, &found, counter); //Funktion
					j = 0;
				}
				else{
					j = 0;
				}
				i += 1;
			}
			if (found == 1){
				i += 1;
				j = 0;
			}
			if (found == 0){
				wordNotFound(&i, &j, &wordCounter, counter, temp, words); //Funktion
			}
		}
		clearTemp(&tempIndex, temp); // Funktion
		if (text[textIndex] == '\0'){
			ende = 1;
		}
	}
	int printCounter = 0;
	int min = 1;
	int counterIndex = 0;
	printf("Originaltext: %s\n\n", text);
	while ((printCounter < wordCounter) && (counterIndex <= i)){
		if (counter[counterIndex] == min){
			int wordsIndex = counterIndex;
			while(words[wordsIndex] != '1'){
				printf("%c", words[wordsIndex]);
				wordsIndex += 1;
			}
			printf("\t\tHaeufigkeit: %d\n\n", counter[counterIndex]);
			printCounter += 1;
			counterIndex += 1;
		}
		else{
			counterIndex += 1;
		}
		if ((counterIndex > i) && (printCounter < wordCounter)){
			counterIndex = 0;
			min += 1;
		}
	}
	return 0;
}
