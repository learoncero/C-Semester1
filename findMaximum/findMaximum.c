/*
 * Übungsblatt 6
 * Aufgabe 4
 *
 *  Created on: 24.11.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>

int findMaximum(int values[], int LEN){
	int i;
	int max = values[0];

	for (i = 0; i < LEN; i = i + 1){
		if (values[i] > max){
			max = values[i];
		}
	}
	return max;
}

#define LEN 5

int main(int argc, char* argv[]){
	int values[] = {-5, 3, 0, -15, -6};
	int max = findMaximum(values, LEN);
	printf("Der größte Wert ist %d.\n", max);

	return 0;
}
