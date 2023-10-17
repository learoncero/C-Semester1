/*
 * Übungsblatt 8
 * Aufgabe 4: Tokenizer
 *
 *  tokenize.c
 *
 *  Created on: 12.01.2023
 *      Author: Lea Roncero
 */

int tokenize(char text[], int indexes[], int len){
	int i = 0;
	int pos;

	if (text[0] != ' '){
		pos = 1;
	}
	else{
		pos = 0;
	}

	for (i = 0; text[i] != '\0'; i += 1){
		if ((text[i] == ' ') && (pos <= len) && (text[i + 1] != '\0')){
			indexes[pos] = (i + 1);
			pos += 1;
		}
	}
	pos -= 1;

	return pos;
}
