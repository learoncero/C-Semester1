/*
 * mainMedian.c
 *
 *  Created on: 19.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define MAX_LEN		6

double median(double numbers[], int len);

int main(int argc, char* argv[]){
	double numbers[MAX_LEN] = {4, 2, 7, 12, 1, 9};

	double result = median(numbers, MAX_LEN);

	printf("Der Median ist: %0.1f", result);

	return 0;
}

double median(double numbers[], int len){
	int i = 0;
	int temp = 0;
	int newLen = len - 1;

	while (len >= 1){
		for (i = 0; i < len - 1; i += 1){
			if (numbers[i] > numbers[i + 1]){
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
			}
		}
		len -= 1;
	}

	newLen = MAX_LEN - 1;
	double median = 0;

	if (newLen % 2 == 0){
		newLen = newLen / 2;
		median = numbers[newLen];
	}
	else{
		newLen = newLen / 2;
		median = (numbers[newLen] + numbers[newLen + 1]) / 2;
	}
	return median;
}
