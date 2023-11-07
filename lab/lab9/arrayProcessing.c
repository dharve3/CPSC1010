/*	arrayProcessing.c
	Desc...
*/


#include "defs.h"


// initializes the array of exercises
// inputs:  the size of the array, the array, and file pointer
// output:  none
void initArray(int arraySize, exercise workout[], FILE *inFile) {
	int i;
	char buffer[80];
	for (i = 0; i/2 < arraySize; i++) {
		fgets(buffer, 80, inFile);
		if (i % 2 == 0) {
			strcpy(workout[i/2].name, buffer);
		}
		else if (i % 2 == 1) {
			strcpy(workout[i/2].muscles, buffer);
		}

		workout[i/2].weight = 0;
		workout[i/2].time = 0;
		workout[i/2].sets = 0;
		workout[i/2].reps = 0;
	}
}


// prints the array
// inputs:  the size of the array and the array
// output:  none
void printArray(int arraySize, exercise workout[]) {
	int i;
	printf("\n%-25s %-36s %5s %5s %5s %5s\n", 
	       "EXERCISE", "MUSCLES", "WEIGHT",
			 "TIME", "SETS", "REPS");
	for (i = 0; i < arraySize; i++) {
		printf("%2d. %-21s %-35s %5d %5d %5d %5d\n", 
				 i+1,
				 workout[i].name,
				 workout[i].muscles,
				 workout[i].weight,
				 workout[i].time,
				 workout[i].sets,
				 workout[i].reps);
	}
	printf("\n");
}


// fills in the array with the values from the user to create
//		their workout plan
// note the call to freopen is needed, which sets the stdin back to 
//		the terminal - - COMMENT IT OUT BEFORE SUBMITTING TO GRADESCOPE
// inputs:  the size of the array and the array
// output:  none
void getWorkout(int arraySize, exercise workout[]) {









}

