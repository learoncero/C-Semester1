/*
 * Zinsrechnung.c
 *
 *  Created on: 22.11.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>

int main(int argc, char* argv[]){
	float capital = 1000;
	int interest = 5;
	int years = 3;
	int i = 1;

	printf("Kapitalentwicklung für Grundkapital: %0.2f EUR\n"
			"Fixzinssatz: %d%%, Laufzeit: %d Jahre\n\n\n\n"
			"Jahr \t\tKapital\n----------------------------\n",capital, interest, years);

	while (i <= years){
		capital = ((capital * interest) / 100) + capital;
		printf("%d \t\t%0.2f EUR\n", i, capital);
		i += 1;
	}
	return 0;
}
