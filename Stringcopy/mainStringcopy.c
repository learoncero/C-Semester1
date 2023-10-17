/*
 * StringcopyMain.c
 *
 *  Created on: 12.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>
#include "Stringcopy.h"
#define MAX_LEN		256

int main(int argc, char* argv[]){
	char sourceStr[] = "Hallo";
	char destStr[MAX_LEN] = "";
	char destStrPtr[MAX_LEN] = "";
	stringcopy(sourceStr, destStr);
	stringcopyPointer(sourceStr, destStrPtr);
	printf("Stringcopy: %s\nStringcopyPointer %s", destStr, destStrPtr);

	return 0;
}
