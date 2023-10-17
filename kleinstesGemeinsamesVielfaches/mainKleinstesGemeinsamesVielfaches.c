/*
 * Übungsblatt 8
 * Aufgabe 1: Kleinstes gemeinsames Vielfaches
 *
 *  mainKleinstesGemeinsamesVielfaches.c
 *
 *  Created on: 13.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#include "kleinstesGemeinsamesVielfaches.h"

int main(int argc, char* argv[]){
	int number1 = 12;
	int number2 = 52;

	int kgv = kgV(number1, number2);

	printf("Number1: %d\nNumber2: %d\n\n", number1, number2);
	printf("Das kleinste gemeinsame Vielfache der beiden ganzen Zahlen %d und %d ist %d.\n", number1, number2, kgv);

	return 0;
}
