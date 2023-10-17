/*
 * mainMaxDifference.c
 *
 *  Created on: 19.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define MAX_LEN		13

int maxDistance(int numbers[], int len);

int main(int argc, char* argv[]){
	int len = MAX_LEN -1;
	int numbers[MAX_LEN] = {2, 9, 3, 2, 5, 9, 6, 8, 2, 6, 3, 5, 8};

	int maxDifference = maxDistance(numbers, len);

	printf("Maximale Differenz: %d", maxDifference);

	return 0;
}

int maxDistance(int numbers[], int len){
	int i;
	int maxLenDifferences = -1;

	for(i = 0; i <= len; i += 1){
		if (numbers[i] > maxLenDifferences){
			maxLenDifferences = numbers[i];
		}
	}

	i = 0;
	int differences[1028] = {0};

	for (i = 0; i <= len; i += 1){
		int checkNum = numbers[i];
		int j = i;

		while (j <= len){
			if ((numbers[j] == checkNum) && (differences[checkNum] < (j - i))){
				differences[checkNum] = j - i;
			}
			j += 1;
		}
	}
	int maxDifference = 0;
	i = 0;

	while (i <= maxLenDifferences){
		if (differences[i] > maxDifference){
			maxDifference = differences[i];
		}
		i += 1;
	}
	return maxDifference;
}
