/*
 * countWordsMinWordlen.c
 *
 *  Created on: 16.01.2023
 *      Author: Lea Roncero
 */

int countWordLen(char* text, int positions[]){
	int i = 0;
	int wordLen = 0;
	int maxLen = 0;

	while (text[i] != '\0'){
		while (((text[i] >= 'A') && (text[i] <= 'Z')) || ((text[i] >= 'a') && (text[i] <= 'z'))){
			i += 1;
			wordLen += 1;
		}
		if (wordLen > maxLen){
			maxLen = wordLen;
		}
		positions[wordLen] += 1;
		wordLen = 0;
		while ((text[i] == ' ') || (text[i] == ',') || (text[i] == '.') || (text[i] == '?')){
			i += 1;
		}
	}
	return maxLen;
}
