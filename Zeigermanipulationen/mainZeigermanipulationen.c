/*
 * Übungsblatt 8
 * Aufgabe 2 c): Zeigermanipulationen
 *
 * mainPointergrafik.c
 *
 *  Created on: 14.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>

int main(int argc, char* argv[]){

	int i = 1234;
	int k = 5678;
	printf("1.) i = %d\t k = %d\n\n", i, k);

	int* pI = &i;
	printf("2.) pI = %d\n\n", *pI);

	*pI = 2323;
	printf("3.) pI = %d\n\n", *pI);

	++*pI;
	printf("4.) pI = %d\n\n", *pI);

	pI = &k;
	printf("5.) i = %d\t k = %d\n", i, *pI);

	return 0;
}
