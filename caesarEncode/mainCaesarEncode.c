/*
 * mainCaesarEncode.c
 *
 *  Created on: 19.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>

void caesarEncode(char text[], int shift);

int main(int argc, char* argv[]){
	char text[] = "zab";
	int shift = 2;
	caesarEncode(text, shift);

	printf("%s", text);

	return 0;
}

void caesarEncode(char text[], int shift){
	int i;

	for (i = 0; text[i] != '\0'; i += 1){
		if (text[i] != ' '){
			text[i] = ((text[i] + shift - 'a') % 26) + 'a';
		}
	}
}
