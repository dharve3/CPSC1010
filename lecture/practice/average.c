/* average.c 

	will average together some grades
	and print the result to the user

	split into functions
*/

#include "defs.h"


// calculates average of the values in the array; returns that average
// inputs: an integer array, size of the array
// output: the average of the integers as a float
float getAvg(int theArray[], int size) {
	int i, sum = 0;
	float average;

	for (i = 0; i < size; i++) {
		sum += theArray[i];
	}

	average = (float)sum / size;
	return average;
}

