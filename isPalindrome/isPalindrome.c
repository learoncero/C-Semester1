/*
 * isPalindrome.c
 *
 *  Created on: 27.12.2022
 *      Author: Lea Roncero
 */
#include <stdio.h>

int isPalindrome(char str[]);

int main (int argc, char* argv[]){
	char str[] = "rentnEsR";
	int result = isPalindrome(str);

	if (result == 1){
		printf("Das eingegebene Wort ist ein Palindrom.");
	}
	else if (result == 0){
		printf("Das eingegebene Wort ist kein Palindrom.");
	}
}

int isPalindrome(char str[]) {
	int len;
	for (len = 0; str[len] != '\0'; len++) {
		if ((str[len] >= 'A') && (str[len] <= 'Z')){
			str[len] += 32;
		}
	}

	int low = 0;
	int high = len - 1;
	int result = 1;

	while ((low < high) && (str[low] == str[high])){
		low += 1;
		high -= 1;
	}

	if (high > low) {
		result = 0;
	}

	return result;
}
