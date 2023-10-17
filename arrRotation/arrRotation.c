/*
 * arrRotation.c
 *
 *  Created on: 18.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN		10

void arrRotation(int numbers[], int len);

int main(int argc, char* argv[]){
	int i = 0;
	int numbers[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	arrRotation(numbers, LEN);

	while(i <= LEN - 1){
		printf("%d\t", numbers[i]);
		i += 1;
	}
	return 0;
}

void arrRotation(int numbers[], int len){
	int temp = numbers[len - 1];
	int i;
	for(i = len - 1; i > 0; i -= 1){
		numbers[i] = numbers[i - 1];
	}
	numbers[0] = temp;
}

