/*
 * ArithmetischesMittel.c
 *
 *  Created on: 22.11.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN 4

int main(int argc, char* argv[]) {
    int numbers [LEN] = {3, -5, -4, -12};
    int min = numbers[0];
    int max = numbers[0];
    double sum = 0;
    double result = 0;
    int i = 0;

    while (i < LEN) {
    	if (numbers[i] < min) {
	        min = numbers[i];
	    }
	    if (numbers[i] > max) {
		    max = numbers[i];
	    }
	    sum = sum + numbers[i];
	    i = i + 1;
    }
    result = sum / LEN;

    printf("Das arithmetische Mittel beträgt %0.1f\nDer maximale Wert beträgt %d\nDer minimale Wert beträgt %d\n", result, max, min);

    return 0;
}
