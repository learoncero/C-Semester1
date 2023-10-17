/*
 * charCounter.c
 *
 *  Created on: 29.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN		26

void charCounter(char* text, int occ[], int* min, int* max);

int main(int argc, char* argv[]){
	char text[] = "In Ulm, um Ulm, rundum Ulm herum.";
	int occ[LEN] = {0};
	int min;
	int max;

	charCounter(text, occ, &min, &max);

	int i = 0;

	printf("Am haeufigsten: ");

	for (i = 0; i <= 25; i += 1){
		if (occ[i] == max){
			printf("%c\t", i + 'a');
		}
	}

	printf("\nAm seltenstens: ");

	for (i = 0; i <= 25; i += 1){
		if (occ[i] == min){
			printf("%c\t", i + 'a');
		}
	}

	return 0;
}

void charCounter(char* text, int occ[], int* min, int* max){
	int i;

	for (i = 0; text[i] != '\0'; i += 1){
		if ((text[i] >= 'A') && (text[i] <= 'Z')){
			text[i] += 32;
		}
		if ((text[i] >= 'a') && (text[i] <= 'z')){
			int pos = text[i] - 'a';
			occ[pos] += 1;
		}
	}

	int textLen;

	for (textLen = 0; text[textLen] != '\0'; textLen += 1);

	*max = 0;
	*min = textLen;

	for (i = 0; i <= 25; i += 1){
		if (occ[i] > *max){
			*max = occ[i];
		}
		else if ((occ[i] < *min) && (occ[i] > 0)){
			*min = occ[i];
		}
	}
}
