/*
 * Dreiecksmatrix.c
 *
 *  Created on: 22.11.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>

int main(int argc, char* argv[]) {
	int n = 20;
	int i = 1;
	int result = 0;
	int row = 1;
	int value = 0;

	do {
		result = i % 2;
		if (result == 1){
			value += 1;
			if (value == row){
				printf("%d\n", i);
				value = 0;
				row += 1;
			}
			else{
				printf("%d\t", i);
			}
		}
		i += 1;
	}while (i < n);
	return 0;
}
