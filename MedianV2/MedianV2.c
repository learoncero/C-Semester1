/*
 * MedianV2.c
 *
 *  Created on: 29.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN		4

double median(double numbers[], int len);

int main(int argc, char* argv[]){

	double numbers[LEN] = {1, 2, 3, 5};

	double med = median(numbers, LEN);

	printf("%0.2f", med);

	return 0;
}

int median(double numbers[], int len){
	int freq[256] = {0};
	int i;
	int max = 0;

	for (i = 0; i < len; i += 1){
		int index = numbers[i];
		freq[index] += 1;
		if (numbers[i] > max){
			max = numbers[i];
		}
	}

	int stop = len/2;
	int count = 0;
	i = 0;

	while ((i <= max) && (count < stop)){
		while ((freq[i] > 0) && (count < stop)){
			count += 1;
			freq[i] -= 1;
		}
		i += 1;
	}

	double median = 0;

	if (len % 2 != 0){
		return median = i - 1;
	}
	else{
		double temp = i - 1;
		while ((i <= max) && (freq[i] == 0)){
			i += 1;
		}
		return median = (temp + i) / 2;
	}
}
