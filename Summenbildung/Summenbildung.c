/*
 * Übungsblatt 6
 * Aufgaben 1-3
 *
 *  Created on: 24.11.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>

// Aufgabe 1
int sumUpAll(int upperLimit){
    int sumAll = 0;
    int i = 1;

    while (i <= upperLimit){
        sumAll = sumAll + i;
        i = i + 1;
    }
    return sumAll;
}

// Aufgabe 2
int sumUpEven(int upperLimit){
	int sumEven = 0;
	int i = 1;

	while (i <= upperLimit){
		if (i % 2 == 0){
			sumEven = sumEven + i;
		}
		i = i + 2;
	}
	return sumEven;
}

// Aufgabe 3
int sumUpLowHigh(int m, int n){ // n = Obergrenze, m = Untergrenze

	int sumLowHigh = n - m;

	return sumLowHigh;
}

int main(int argc, char* argv[]){
    int maxNum = 10;
    int sumAll = sumUpAll(maxNum);
    printf("Die Summe aller Zahlen von 1 bis %d ergibt %d.\n", maxNum, sumAll);
    int sumEven = sumUpEven(maxNum);
    printf("Die Summe aller geraden Zahlen von 1 bis %d ergibt %d.\n", maxNum, sumEven);
    int lowerLimit = 1;
    int upperLimit = 10;
    int sumLowHigh = sumUpLowHigh(sumUpAll(lowerLimit-1), sumUpAll(upperLimit));
    printf("Die Summe aller Zahlen von %d bis %d ergibt %d.\n", lowerLimit, upperLimit, sumLowHigh);

    return 0;
}

