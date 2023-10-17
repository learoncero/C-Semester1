/*
 * wortlaengenstatistik.h
 *
 *  Created on: 15.01.2023
 *      Author: Lea Roncero
 */

#ifndef HAEUFIGKEITSANALYSE_H_
#define HAEUFIGKEITSANALYSE_H_

extern int readWord(int* textIndex, int* tempIndex, char text[], char temp[]);
extern void skipDelimiters(int* textIndex, char text[]);
extern void saveFirstWord(int* i, int* j, int* wordCounter, char words[], char temp[], int counter[]);
extern void clearTemp(int* tempIndex, char temp[]);
extern void wordFound(int* i, int* j, int* wordLen, int* found, int counter[]);
extern void wordNotFound(int* i, int* j, int* wordCounter, int counter[], char temp[], char words[]);

#endif /* HAEUFIGKEITSANALYSE_H_ */
