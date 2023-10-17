/*
 * readWord.c
 *
 *  Created on: 15.01.2023
 *      Author: Lea Roncero
 */

int readWord(int* textIndex, int* tempIndex, char text[], char temp[]){
	while ((text[*textIndex] != '.') && (text[*textIndex] != ' ') && (text[*textIndex] != ',') && (text[*textIndex] != '\0')){
		temp[*tempIndex] = text[*textIndex];
		*textIndex += 1;
		*tempIndex += 1;
	}
	int wordLen = *tempIndex;
	return wordLen;
}
