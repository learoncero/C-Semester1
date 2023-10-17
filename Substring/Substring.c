/*
 * Übungsblatt 7
 * Aufgabe 2 Suche nach einer Teilzeichenkette
 *
 * Substring.c
 *
 *  Created on: 13.12.2022
 *      Author: Lea Roncero
 */

int Substring(char* text, char* pattern, int indexes[], int lenIndexes){
	int lenPattern;
	int lenText;

// Berechnung der Länge von text
	for (lenText = 0; text[lenText] != '\0'; lenText += 1);

// Berechnung der Länge von pattern
	for (lenPattern = 0; pattern[lenPattern] != '\0'; lenPattern += 1);

	int i;
	int j = 0;
	int indexCounter = 0;

	for (i = 0; i < lenText; i++){ // Diese Schleife durchläuft den Text
		while (text[i + j] == pattern[j]){ // Diese Schleife wird ausgeführt, wenn Text == pattern
			j += 1;
			if ((j == lenPattern) && ((text[i + j] == ' ') || (text[i + j] == '\0'))){
				if (indexCounter <= lenIndexes - 1){
					indexes[indexCounter] = i;
					j = 0;
					i = i + lenPattern;
					indexCounter += 1;
				}
				else{
					return indexCounter = -1;
				}
			}
			else if ((j == lenPattern) && (text[i + j] != ' ')){
				i = i + j;
				j = 0;
			}
		}
		if (j != lenPattern) {
			i = i + j;
			j = 0;
		}
	}
	return indexCounter;
}
