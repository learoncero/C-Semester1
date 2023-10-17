/*
 * clearTemp.c
 *
 *  Created on: 15.01.2023
 *      Author: Lea Roncero
 */

void clearTemp(int* tempIndex, char temp[]){
	while (*tempIndex >= 0){
		temp[*tempIndex] = '\0';
		*tempIndex -= 1;
	}
	*tempIndex += 1;
}
