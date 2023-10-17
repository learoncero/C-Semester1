/*
 * unique.c
 *
 *  Created on: 28.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN		11

int unique(int values[], int n);

int main(int argc, char* argv[]){
	int values[LEN] = {1, 3, 3, 4, 5, 5, 5, 6, 7, 8, 9};

	int newLen = unique(values, LEN);

	int i = 0;

	printf("newLen = %d\n\n", newLen);
	while (i < newLen){
		printf("%d\t", values[i]);
		i += 1;
	}

	return 0;
}

int unique(int values[], int n){
	int i = 0;

	while (i < n - 1){
		while (values[i] == values[i + 1]){
			int j = i;
			while (j < n - 1){
				values[j] = values[j + 1];
				j += 1;
			}
			n -= 1;
		}
		i += 1;
	}
	return n;
}
