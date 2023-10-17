/*
 * Übungsblatt 7
 * Aufgabe 2 Suche nach einer Teilzeichenkette
 *
 * Substring.c
 *
 *  Created on: 13.12.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>
#include "Substring.h"
#define MAX_LEN		256

int main (int argc, char* argv[]){
	char text[] = "sodass das ein das";
	char pattern[] = "das";
	int indexes[MAX_LEN] = {0};
	int indexCounter = Substring(text, pattern, indexes, MAX_LEN);
	int j;

	printf("Text:\t\t %s \n", text);
	printf("Pattern:\t %s \n\n", pattern);

	if (indexCounter == -1){
		printf("Es ist ein Fehler aufgetreten und es konnten nicht alle Anfangsindexe abgespeichert werden.\n"
				"Bitte erhöhen Sie die Länge des Arrays indexes.");
	}
	else if (indexCounter == 0){
		printf("Das Pattern ist nicht im Text enthalten.");
	}
	else if(indexCounter == 1){
		printf("Die Position ist: %d", indexes[0]);
	}
	else{
		printf("Die Positionen sind: ");
			for (j = 0; j < indexCounter-1; j += 1){
				printf("%d, ", indexes[j]);
			}
			if (j == indexCounter-1){
				printf("%d", indexes[j]);
			}
	}
	return 0;
}
