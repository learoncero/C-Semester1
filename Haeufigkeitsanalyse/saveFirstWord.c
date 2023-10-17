/*
 * saveFirstWord.c
 *
 *  Created on: 15.01.2023
 *      Author: Lea Roncero
 */

void saveFirstWord(int* i, int* j, int* wordCounter, char words[], char temp[], int counter[]){
	*i = 1;
	while (temp[*j] != '\0'){
		words[*i] = temp[*j];
		*i += 1;
		*j += 1;
	}
	words[*i] = '1';
	*wordCounter += 1;
	counter[1] = 1;
}
