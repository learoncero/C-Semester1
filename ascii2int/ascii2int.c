/*
 * ascii2int.c
 *
 *  Created on: 22.11.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>

int main(int argc, char* argv[]){
	char str[] = "B0123ABC";
	int i = 0;
	int digit = 0;
	int number = 0;

	if ((str[i] < '0') || (str[i] > '9')){
		printf("0");
	}
	else{
	    while ((str[i] >= '0') && (str[i] <= '9')){
	    	digit = str[i] - '0';
		    number = (number * 10) + digit;
		    i += 1;
	    }
	printf("%d\n", number);
	}
	return 0;
}
