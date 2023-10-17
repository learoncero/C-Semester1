/*
 * Übungsblatt 6
 * Aufgabe 5
 *
 *  Created on: 24.11.2022
 *      Author: Lea Roncero
 */
#include <stdio.h>

double exponentialFunction(int n, double z){
	double num = 1;
	double den = 1;
	int i;
	double result = 1;

	for(i = 1; i <= n; i++){
		num = num * z;
		den = den * i;
		result = result + (num / den);
	}
	return result;
}

int main(int argc, char* argv[]){
	int n = 10;
	double z = 5;
	double result = exponentialFunction(n, z);
	printf("Das Ergebnis von e^%0.1f ist %0.5f\n", z, result);

	return 0;
}
