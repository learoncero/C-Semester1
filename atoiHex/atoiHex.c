/*
 * atoiHex.c
 *
 *  Created on: 29.01.2023
 *      Author: Lea Roncero
 */

#include <stdio.h>

int atoiHex(char hex[]){
	int len;
	for (len = 0; hex[len] != '\0'; len += 1);

	int i;
	int mult = 1;
	int dec = 0;

	for (i = len - 1; i > 1; i -= 1){
		if ((hex[i] >= '0') && (hex[i] <= '9')){
			dec += (hex[i] - '0') * mult;
		}
		else if ((hex[i] >= 'a') && (hex[i] <= 'z')){
			dec += (hex[i] - 'a' + 10) * mult;
		}
		else {
			dec += (hex[i] - 'A' + 10) * mult;
		}
		mult *= 16;
	}
	return dec;
}

int main(int argc, char* argv[]){
	char hex[] = "0xABCDA";
	int dec = atoiHex(hex);

	printf("%d", dec);

	return 0;
}
