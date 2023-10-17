/*
 * SubstringV2.c
 *
 *  Created on: 29.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>

void printOccurances(char text[], char pattern[]){
	int i = 0;
	int indices[20] = {0};
	int j = 0;
	int k = 0;
	int patLen;

	for (patLen = 0; pattern[patLen] != '\0'; patLen += 1);

	while (text[i] != '\0'){
		while ((text[i] == pattern[j]) && (text[i] != '\0')){
			i += 1;
			j += 1;
		}
		if ((j == patLen) && ((text[i] == ' ') || (text[i] == '\0'))){
			indices[k] = i - patLen;
			k += 1;
		}
		j = 0;
		i += 1;
	}

	for (i = 0; i < k; i += 1){
		printf("%d\t", indices[i]);
	}
}

int main(int argc, char* argv[]){
	char text[] = "dass das funktioniert sodass das";
	char pattern[] = "das";

	printOccurances(text, pattern);
}
