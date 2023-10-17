/*
 * Übungsblatt 7
 * Aufgabe 1 Primfaktorenzerlegung
 *
 * main.c
 *
 *  Created on: 13.12.2022
 *      Author: Lea Roncero
 */


#include <stdio.h>
#include "Primfaktorenzerlegung.h"
#define MAX_LEN		256

int main(int argc, char* argv[]){
	int number = 56;
	int i;
	int lenArray = MAX_LEN;
	int primeFactors[MAX_LEN] = {0};

	if (number > 1){
		int len = primfaktorenzerlegung(number, lenArray, primeFactors);
		if (len == -1){
			printf("Es ist ein Fehler aufgetreten und es konnten nicht alle Primfaktoren ermittelt werden.\n"
					"Bitte erhöhen Sie die Länge des Arrays primeFactors.");
		}
		else{
			for (i = 0; i < len; i += 1){
				printf("%5d |", number);
				printf("%d\n", primeFactors[i]);
				number = number / primeFactors[i];

			}
			number = 1;
			printf("%5d |", number);
		}
	}
	else{
		printf("Bitte geben Sie eine Zahl > 1 ein");
	}
	return 0;
}
