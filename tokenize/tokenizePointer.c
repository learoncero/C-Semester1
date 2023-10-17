/*
 * Übungsblatt 8
 * Aufgabe 4: Tokenizer
 *
 *  tokenizePointer.c
 *
 *  Created on: 13.01.2023
 *      Author: Lea Roncero
 */
#include <stdio.h>

int tokenizePointer(char* text, char* addresses[]){
	int len = 0;

	if (*text != ' '){
		*addresses = text;
		addresses += 1;
		len += 1;
		text += 1;
	}

	while(*text != '\0'){
		if ((*text == ' ') && (*(text + 1) != '\0')){
			*addresses = text + 1;
			addresses += 1;
			len += 1;
		}
		text += 1;
	}
	len -= 1;

	return len;
}
