/*
 * Uebungsblatt 9
 * Aufgabe 1: Messfehler
 *
 * mainProbeManager.c
 *
 *  Created on: 20.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#include "probeManager.h"
#define LEN		6

int main(int argc, char* argv[]){

	struct probe measurements[LEN] = {
			{0, 0, 450, 0},
			{22.2, 10, 451.5, 60.2},
			{23.1, 20, 450.1, 129.7},
			{75.4, 30, 449.5, 192.3},
			{21.3, 40, 451.2, 252.4},
			{73.5, 50, 452.2, 310.1},
//			{22.4, 60, 450.8, 365.9},
	};

	probeManager(measurements, LEN);

	int i;

	for (i = 0; i < LEN; i += 1){
		printf("Geschwindigkeit in km/h: %0.2f\t "
				"Zeit in Sekunden: %d\t "
				"Meereshöhe in Meter: %0.2f\t"
				"Distanz in Meter: %0.2f\n\n", measurements[i].speed, measurements[i].time, measurements[i].seaLevel, measurements[i].distance);
	}

	return 0;
}
