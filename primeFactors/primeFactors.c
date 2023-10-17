/*
 * primeFactors.c
 *
 *  Created on: 29.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN		256

int primeFactors(int number, int primes[], int len);

int main(int argc, char* argv[]){
	int number = 22;
	int primes[LEN] = {0};

	int len = primeFactors(number, primes, LEN);

	printf("Die Primfaktorenzerlegung der Zahl %d ist: ", number);

	int i;

	for (i = 0; i < len; i += 1){
		if (i == len - 1){
			printf("%d", primes[i]);
		}
		else{
			printf("%d, ", primes[i]);
		}
	}

	return 0;
}

int primeFactors(int number, int primes[], int len){
	int i = 0;
	while ((number > 1) && (number % 2 == 0)){
		number = number / 2;
		primes[i] = 2;
		i += 1;
	}
	int prime = 3;

	while (number > 1){
		while (number % prime == 0){
			number = number / prime;
			primes[i] = prime;
			i += 1;
		}
		if (number % prime != 0){
			prime += 2;
		}
	}

	return i;
}
