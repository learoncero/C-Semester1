/*
 * Uebungsblatt 10
 * Aufgabe 1: Umgang mit Zeichenketten
 *
 * strFunctions.c
 *
 *  Created on: 27.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>

int strLen(char str[]){
	int len = 0;
	while (str[len] != '\0'){
		len += 1;
	}
	return len;
}

int strCmp(char str1[], char str2[]){
	while (*str1 == *str2){
		str1 += 1;
		str2 += 1;
	}
	if (*str1 > *str2){
		return 1;
	}
	else{
		return -1;
	}
}

void toUpperCase(char str[]){
	while (*str != '\0'){
		if ((*str >= 'a') && (*str <= 'z')){
			*str -= 32;
		}
		str += 1;
	}
}

void copy(char destStr[], char srcStr[]){
	while (*srcStr != '\0'){
		*destStr = *srcStr;
		srcStr += 1;
		destStr += 1;
	}
	*destStr = '\0';
}

int subStr(char destStr[], char srcStr[], int startOffs, int endOffs){
	int len = 0;

	while (srcStr[len] != '\0'){
		len += 1;
	}

	if ((startOffs >= 0) && (startOffs <= len - 1) && (endOffs >= 0) && (endOffs <= len - 1)){
		int i = 0;
		while (startOffs <= endOffs){
			destStr[i] = srcStr[startOffs];
			i += 1;
			startOffs += 1;
		}
		return i;
	}
	else{
		return -1;
	}
}
