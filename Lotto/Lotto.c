/*
 * Lotto.c
 *
 *  Created on: 05.01.2023
 *      Author: Lea Roncero
 */

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define MAX_LEN		5

int main(int argc, char* argv[]){
	int i = 0;
	int numbers[MAX_LEN] = {0};
	int numCounter = 0;
	int value = 0;
	int j = 0;
	srand(time(NULL));

	while (i <= MAX_LEN-1){
		value = rand() % 33;
		j = i;
		while(j >= 0){
			if (numbers[j] == value){
				numCounter += 1;
			}
			j -= 1;
		}
		if(numCounter < 2){
			numbers[i] = value;
			i += 1;
		}
	}
	while (i == MAX_LEN){
		numCounter = 0;
		j = i;
		value = rand() % 33;
		while(j >= 0){
			if (numbers[j] == value){
				numCounter += 1;
			}
			j -= 1;
		}
		if(numCounter == 0){
			numbers[i] = value;
			i += 1;
		}
	}
	int tausch = 0;
	int len = MAX_LEN-1;
	do{
		for (i = 0; i <= len; i++){
			if (numbers[i] > numbers[i+1]){
				int temp = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i+1] = temp;
				tausch = 1;
			}
		}
		len -= 1;
	} while((tausch == 1) && (len >= 1));
	i = 0;
	while(i <= MAX_LEN){
		printf("%d\t", numbers[i]);
		i += 1;
	}
}
