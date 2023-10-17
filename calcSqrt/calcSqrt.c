/*
 * Übungsblatt 6
 * Aufgabe 6
 *
 *  Created on: 24.11.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>

double absoluteValue(double num){
	if (num < 0){
		return num * (-1);
	}
	return num;
}

double calcSqrt(int x, double eps){
	double y = x/2;
	double temp;

	while ((absoluteValue(y - temp)) > eps){
		temp = y;
		y = (0.5 * (y + x/y));
	}
	return y;
}

int main(int argc, char* argv[]){
	int x = 12.5;
	double eps = 0.00001;
	double sqrt = calcSqrt(x, eps);
	printf("Der Annäherungswert für Wurzel %d = %0.5f\n", x, sqrt);

	return 0;
}
