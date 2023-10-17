/*
 * MinMaxAverage.c
 *
 *  Created on: 22.12.2022
 *      Author: Lea Roncero
 */

#define OK			0
#define ERROR		-1

int MinMaxMean(int numbers[], int len, int* pMin, int* pMax, double* pMean){
	*pMin = *pMax = numbers[0];
	int i;
	for(i = 0; i <= len-1; i++){
		if (numbers[i] < *pMin){
			*pMin = numbers[i];
		}
		else if(numbers[i] > *pMax){
			*pMax = numbers[i];
		}
		*pMean += numbers[i];
	}
	*pMean /= len;

	return OK;
}
