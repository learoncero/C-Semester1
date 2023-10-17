/*
 * copyEncrypt.c
 *
 *  Created on: 27.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#define LEN		30

void copyEncrypt(char destStr[], char srcStr[], int shift);

int main(int argc, char* argv[]){
	char srcStr[] = "Hallo";
	char destStr[LEN] = "";
	int shift = 1;

	copyEncrypt(destStr, srcStr, shift);

	printf("Source: %s\n\nDestination: %s\n", srcStr, destStr);

	return 0;
}

void copyEncrypt(char destStr[], char srcStr[], int shift){
	while (*srcStr != '\0'){
		if ((*srcStr >= 'a') && (*srcStr <= 'z')){
			*destStr = ((*srcStr + shift) - 'a') % 26 + 'a';
		}
		else if ((*srcStr >= 'A') && (*srcStr <= 'Z')){
			*destStr = ((*srcStr + shift) - 'A') % 26 + 'A';
		}
		srcStr += 1;
		destStr += 1;
	}
	*destStr = '\0';
}
