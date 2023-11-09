/*	Dylan Harvey
	11/7/2023
	CPSC-1011-002
	Gets input from file, then gets input from user.
	Prints excerises with the input in an easily readable format.
*/

#include "defs.h"

int main(void) {
	FILE *inFile;
	int exercise_count;

	inFile = fopen("exercises.txt", "r");
	if (inFile == NULL) {
		fprintf(stderr, "File open error. Exiting Program.\n");
		exit(1);
	}

	fscanf(inFile, "%d", &exercise_count);
	
	exercise exercises[exercise_count];

	initArray(exercise_count, exercises, inFile);
	
	// printArray(exercise_count, exercises);

	getWorkout(exercise_count, exercises);

	printArray(exercise_count, exercises);

	fclose(inFile);
	return 0;
}
