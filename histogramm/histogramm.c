/*
 * histogramm.c
 *
 *  Created on: 27.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define MAX		10
#define LEN		16

void histogramm(int values[], int len, int valueCount[]);

int main(int argc, char* argv[]){
	int values[LEN] = {1, 3, 6, 8, 3, 2, 1, 5, 7, 8, 9, 10, 2, 1, 5, 3};
	int valueCount[MAX + 1] = {0};

	histogramm(values, LEN, valueCount);

	int i;

	for (i = 1; i <= MAX; i += 1){
		printf("%d\t", i);
	}

	for (i = 1; i <= MAX; i += 1){
		if (valueCount[i] > 0){
			while (valueCount[i] > 1){
				printf("x\t\n");
				valueCount[i] -= 1;
			}
				printf("x\t");
		}
		else {
			printf("\t");
		}
	}

	return 0;
}

void histogramm(int values[], int len, int valueCount[]){
	int i;

	for (i = 0; i < len; i += 1){
		if ((values[i] >= 1) && (values[i] <= MAX)){
			int index = values[i];
			valueCount[index] += 1;
		}
	}
}
