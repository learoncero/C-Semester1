/*
 * Uebungsblatt 9
 * Aufgabe 1: Messfehler
 *
 * probeManager.c
 *
 *  Created on: 20.01.2023
 *      Author: Lea Roncero
 */

#include "probeManager.h"

void probeManager(struct probe measurements[], int len){
	int i = 1;

	while (i <= len - 1){
		if ((measurements[i].seaLevel < measurements[i - 1].seaLevel + 2) && (measurements[i].seaLevel > measurements[i - 1].seaLevel - 2) && ((measurements[i].speed > measurements[i - 1].speed + 50) || (measurements[i].speed < measurements[i - 1].speed - 50))){
			measurements[i].speed = ((measurements[i - 1].distance)/(measurements[i - 1].time))*3.6;
		}
		i += 1;
	}
}
