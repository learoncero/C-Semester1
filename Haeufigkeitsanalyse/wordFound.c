/*
 * wordFound.c
 *
 *  Created on: 15.01.2023
 *      Author: Lea Roncero
 */

void wordFound(int* i, int* j, int* wordLen, int* found, int counter[]){
	*found = 1;
	counter[*i] += 1;
	*i += *wordLen;
	*j = 0;
}
