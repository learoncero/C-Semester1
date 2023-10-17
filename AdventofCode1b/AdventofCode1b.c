/*
 * AdventofCode1b.c
 *
 *  Created on: 01.12.2022
 *      Author: Lea Roncero
 */

/*
 * AdventofCode1.c
 *
 *  Created on: 01.12.2022
 *      Author: Lea Roncero
 */

#include <stdio.h>



#define VALUES_SIZE            (1024 * 16)
#define NEW_VALUES_SIZE		   (1024 * 16)


int stringToInt(char* s) {
    int result = 0;
    int i = 0;
    while ((s[i] >= '0') && (s[i] <= '9')) {
        result = result * 10 + (s[i] - '0');
        i = i + 1;
    }
    return result;
}

int calcMaxCalories(int values[], int valuesLength){
	int i = 0;
	int sum = 0;
	int max = 0;
	int medium = 0;
	int min = 0;
	while (i < valuesLength){
		if (values[i] != 0){
		sum = sum + values[i];
		i = i + 1;
		}
		else{
			if (max < sum){
		        min = medium;
		        medium = max;
		        max = sum;
		    }
		    else if(medium < sum){
		        min = medium;
		        medium = sum;
		    }
		    else if (min < sum){
		        min = sum;
		    }
		    sum = 0;
		    i += 1;
		}
	}

	int result = max + medium + min;

	return result;
}


int main(int argc, char* argv[]) {
    char* filename = "input.txt";
    int values[VALUES_SIZE];
    int valuesLength = 0;



    printf("Opening file %s\n", filename);
    FILE* infile = fopen("input.txt", "r");
    char input[64];
    while (fgets(input, 64, infile) != NULL) {
        int val = stringToInt(input);
//        printf("read: %s, converted: %d\n", input, val);
        values[valuesLength] = val;
        valuesLength = valuesLength + 1;
//        int val = atoi(input);
//        printf("Val: %d\n", val);
    }



    fclose(infile);
    printf("end of file.\n");

    int maxCalories = calcMaxCalories(values, valuesLength);
    printf("Top three: %d", maxCalories);
}

