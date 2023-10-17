/*
 * removeDuplicates.c
 *
 *  Created on: 19.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define MAX_LEN		7

int main(int argc, char* argv[]){
	int values[MAX_LEN] = {4, 22, 22, 7, 16, 3, 3};
	int len = MAX_LEN - 1;
	int i;
	int temp = 0;

	while (len >= 1){
		for (i = 0; i <= len - 1; i += 1){
			if (values[i] > values[i + 1]){
				temp = values[i];
				values[i] = values[i + 1];
				values[i + 1] = temp;
			}
		}
		len -= 1;
	}
	i = 0;
	len = MAX_LEN - 1;

	while (i < len){
		int j = 0;
		if (values[i] == values[i + 1]){
			j = i + 1;
				while (j < len){
					values[j] = values[j + 1];
					j += 1;
				}
				len -= 1;
				values[j] = -1;
		}
		i += 1;
	}

	int s = 0;
	for (s = 0; s <= len; s += 1){
		printf("%d\t", values[s]);
	}

}
