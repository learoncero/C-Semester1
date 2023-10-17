/*
 * mainWortlaengenstatistik.c
 *
 *  Created on: 16.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#include "Wortlaengenstatistik.h"
#define MAX_LEN_POS		256

int main(int argc, char* argv[]){
	char* text = "Wenn Fliegen hinter Fliegen fliegen, fliegen Fliegen Fliegen nach. Ist das wirklich ein guter Probetext? Ich denke ja";
	int positions[MAX_LEN_POS] = {0};
	int len = countWordLen(text, positions);
	int i;

	printf("Text: %s\n\n", text);
	for (i = 0; i <= len; i += 1){
		if (positions[i] > 0){
			printf("%d Wörter mit Buchstabenanzahl %d\n\n", positions[i], i);
		}
	}
	return 0;
}
