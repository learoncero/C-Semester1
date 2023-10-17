/*
 * Dreiecksmatrix_for.c
 *
 *  Created on: 22.11.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>

int main(int argc, char* argv[]) {
	int n = 20;
	int i;
	int result = 0;
	int row = 1;
	int value = 0;

	for(i=1; i<n; i+=1) {
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
	}
	return 0;
}
