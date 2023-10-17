/*
 * Übungsblatt 7
 * Aufgabe 1 Primfaktorenzerlegung
 *
 * main.c
 *
 *  Created on: 13.12.2022
 *      Author: Lea Roncero
 */

int primfaktorenzerlegung(int number, int lenArray, int primeFactors[]){
	int prime = 2;
	int i = 0;
	while ((number > 1) && (i < lenArray)){
		if (number % prime == 0){
			number = number / prime;
			primeFactors[i] = prime;
			i += 1;
		}
		else{
			prime += 1;
		}
	}
	if (i >= lenArray){
		i = -1;
	}
	return i;
}
