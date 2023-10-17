/*
 * StringcopyPointer.c
 *
 *  Created on: 12.01.2023
 *      Author: Lea Roncero
 */

void stringcopyPointer(char* sourceStr, char* destStr){
	while (*sourceStr != '\0'){
		*destStr = *sourceStr;
		destStr += 1;
		sourceStr += 1;
	}
	/* kürzer:
	 * while((*destStr++ = *sourceStr++) != '\0'); kopiert zuerst und prüft dann, deswegen kopiert es gleich
	 * '\0' mit
	 */

	/* noch kürzer:
	 * while (*destStr++ = *sourceStr++);
	 */
	*destStr = '\0';
}
