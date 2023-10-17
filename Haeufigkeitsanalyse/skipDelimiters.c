/*
 * skipDelimiters.c
 *
 *  Created on: 15.01.2023
 *      Author: Lea Roncero
 */

void skipDelimiters(int* textIndex, char text[]){
	while ((text[*textIndex] == '.') || (text[*textIndex] == ' ') || (text[*textIndex] == ',')){
		*textIndex += 1;
	}
}
