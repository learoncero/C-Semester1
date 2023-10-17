/*
 * mainKleinstesGemeinsamesVielfaches2.c
 *
 *  Created on: 21.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>

int ggT(int a, int b);
int kgV(int a, int b);

int main(int argc, char* argv[]){
	int a = 56;
	int b = 1;
	int result = kgV(a, b);

	printf("Das kgV der beiden ganzen Zahlen %d und %d ist %d.", a, b, result);

	return 0;
}

int ggT(int a, int b){

	int temp = 0;

	if ((a > 0) && (b > 0)){
		if (b < a){
			temp = a;
			a = b;
			b = temp;
		}
	}

	while (b != 0){
		if (b < a){
			temp = a;
			a = b;
			b = temp;
		}
		b = b % a;
	}
	return a;
}

int kgV(int a, int b){
	return (a * b)/ggT(a, b);
}
