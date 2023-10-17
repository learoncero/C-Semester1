/*
 * Übungsblatt 8
 * Aufgabe 1: Kleinstes gemeinsames Vielfaches
 *
 * kleinstesGemeinsamesVielfaches.c
 *
 *  Created on: 13.01.2023
 *      Author: Lea Roncero
 */

int kgV(int number1, int number2){

	if ((number1 == 0) || (number2 == 0)){
		return number1 + number2;
	}

	if (number1 > number2){
		int temp = number2;
		number2 = number1;
		number1 = temp;
	}

	int kgv = number2;
	int multiplier = 2;

	while (kgv % number1 != 0){
		kgv = number2 * multiplier;
		multiplier += 1;
	}
	return kgv;
}
