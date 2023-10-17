/*
 * maxDifferenceV3.c
 *
 *  Created on: 23.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN		13

int maxDifference(int numbers[], int len);

int main (int argc, char* argv[]){

	int numbers[LEN] = {1, 2, 3, 1, 4, 5, 1, 2, 3, 1, 5, 2, 4};
	int difference = maxDifference(numbers, LEN);

	printf("%d", difference);
}

int maxDifference(int numbers[], int len){
	int i = 0;
	int j = len - 1;
	int difference = 0;

	while ((i <= len - 1) && (i <= len - 1 - difference)){
		while (j >= 0){
			if ((numbers[i] == numbers[j]) && (j - i > difference)){
				difference = j - i;
			}
			j -= 1;
		}
		i += 1;
		j = len - 1;
	}
	return difference;
}
