/*
 * strFunctions.h
 *
 *  Created on: 01.02.2023
 *      Author: Lea Roncero
 */

#ifndef STRFUNCTIONS_H_
#define STRFUNCTIONS_H_

int strLen(char str[]);
int strCmp(char str1[], char str2[]);
void toUpperCase(char str[]);
void copy(char destStr[], char srcStr[]);
int subStr(char destStr[], char srcStr[], int startOffs, int endOffs);

#endif /* STRFUNCTIONS_H_ */
