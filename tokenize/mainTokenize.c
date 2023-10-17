/*
 * Übungsblatt 8
 * Aufgabe 4: Tokenizer
 *
 *  mainTokenize.c
 *
 *  Created on: 12.01.2023
 *      Author: Lea Roncero
 */
#include <stdio.h>
#include "tokenize.h"
#define LEN		256

int main(int argc, char* argv[]){
	char text[] = "Das ist ein Probetext";
	int indexes[LEN] = {0};
	int i  = 0;

	int posIndexes = tokenize(text, indexes, LEN);

	printf("Text: %s\n\n", text);
	printf("Das Resultat der 1. Version ist: ");
	for (i = 0; i <= posIndexes; i += 1){
		if (i == posIndexes){
			printf("%d", indexes[i]);
		}
		else{
			printf("%d, ", indexes[i]);
		}
	}

	char* addresses[LEN];
	int lenAddresses = tokenizePointer(text, addresses);

	printf("\n\nDas Resultat der 2. Version ist: ");
	for(i = 0; i <= lenAddresses; i += 1){
		if (i == lenAddresses){
			printf("%p\n", addresses[i]);
		}
		else{
			printf("%p, ", addresses[i]);
		}
	}

	return 0;
}
