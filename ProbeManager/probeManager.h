/*
 * Uebungsblatt 9
 * Aufgabe 1: Messfehler
 *
 * probeManager.h
 *
 *  Created on: 23.01.2023
 *      Author: Lea Roncero
 */

#ifndef PROBEMANAGER_H_
#define PROBEMANAGER_H_

struct probe {
	double speed;
	int time;
	double seaLevel;
	double distance;
};

extern void probeManager(struct probe measurements[], int len);

#endif /* PROBEMANAGER_H_ */
