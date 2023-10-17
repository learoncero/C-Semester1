/*
 * mainMinMaxMean.c
 *
 *  Created on: 22.12.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>
#include "MinMaxMean.h"
#define LEN			5
#define OK			0
#define ERROR		-1

int main(int argc, char* argv[]){
	int numbers[] = {10, 5, 6, 9, 2};
	int min = 0;
	int max = 0;
	double mean = 0;
	MinMaxMean(numbers, LEN, &min, &max, &mean);
	printf("Minimum: %d\nMaximum: %d\nDurchschnitt: %0.1f\n", min, max, mean);
}
