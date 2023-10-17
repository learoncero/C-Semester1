/*
 * mainMaxDifferenceV2.c
 *
 *  Created on: 23.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN		13

int maxDifference(int numbers[], int len);

int main(int argc, char* argv[]){
	int numbers[LEN] = {1, 2, 3, 1, 4, 5, 1, 2, 3, 1, 5, 4, 2};

	int difference = maxDifference(numbers, LEN);

	printf("Der größte Abstand ist: %d", difference);
}

int maxDifference(int numbers[], int len){
	int i = 0;
	int j;
	int difference = 0;

	while ((i <= len - 1) && (i <= len - 1 - difference)){
		j = i + 1;
		while (j <= len - 1){
			if ((numbers[j] == numbers[i]) && (j - i > difference)){
				difference = j - i;
			}
			j += 1;
		}
		i += 1;
	}
	return difference;
}
