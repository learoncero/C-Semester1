/*
 * onlyPositive.c
 *
 *  Created on: 27.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define SIZE	10

int onlyPositive(int values[], int len);

int main(int argc, char* argv[]){
	int values[SIZE] = {-14, 3, -4, -1, 7, -2, 6, 3, 1, -1};
	int newLen = onlyPositive(values, SIZE);
	int i = 0;

	for (i = 0; i < newLen; i += 1){
		printf("%d\t", values[i]);
	}
}

int onlyPositive(int values[], int len){
	int i = 0;
	while (i <= len - 1){
		int j;
		if (values[i] < 0){
			for (j = i; j <= len - 2; j += 1){
				values[j] = values[j + 1];
			}
			len -= 1;
		}
		if (values[i] > 0){
			i += 1;
		}
	}
	return len;
}
