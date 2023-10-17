/*
 * wordNotFound.c
 *
 *  Created on: 15.01.2023
 *      Author: Lea Roncero
 */

void wordNotFound(int* i, int* j, int* wordCounter, int counter[], char temp[], char words[]){
    *wordCounter += 1;
	counter[*i] += 1;
	while (temp[*j] != '\0'){
		words[*i] = temp[*j];
		*i += 1;
		*j += 1;
	}
	words[*i] = '1';
}
