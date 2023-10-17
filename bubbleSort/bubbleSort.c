/*
 * bubbleSort.c
 *
 *  Created on: 30.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN		13

void bubbleSort(int numbers[], int len);

int main(int argc, char* argv[]){
	int numbers[LEN] = {5, 1, 3, 2, 11, 63, 17, 22, 8, 10, 52, 35, 42};
	bubbleSort(numbers, LEN);

	int i;
	for (i = 0; i < LEN; i += 1){
		printf("%d\t", numbers[i]);
	}

	return 0;
}

void bubbleSort(int numbers[], int len){
	int i;

	while (len > 1){
		int temp = 0;
		for (i = 0; i < len - 1; i += 1){
			if (numbers[i] > numbers[i + 1]){
				temp = numbers[i + 1];
				numbers[i + 1] = numbers[i];
				numbers[i] = temp;
			}
		}
		len -= 1;
	}
}
