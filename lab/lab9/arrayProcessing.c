/*	arrayProcessing.c
	Contains all the functions used in lab9.c
*/


#include "defs.h"


// initializes the array of exercises
// inputs:  the size of the array, the array, and file pointer
// output:  none
void initArray(int arraySize, exercise workout[], FILE *inFile) {
	int i;
	char buffer[41];

	fgets(buffer, 41, inFile);
	for (i = 0; i/2 < arraySize; i++) {
		fgets(buffer, 41, inFile);
		buffer[strcspn(buffer, "\n")] = 0; 
		// I was hoping this would be a temporary soln. but formatting is messed up in print without it
		// printf("DEBUG: buffer: %s\n", buffer);
		/* printf("DEBUG: char buffer:\n");
		for (int j = 0; j < 41; j++) {
			printf("'%c', ", buffer[j]);
		}
		printf("\n");
		*/
		if (i % 2 == 0) {
			strcpy(workout[i/2].name, buffer);
			// printf("DEBUG: assigning name %s\n", workout[i/2].name);
			/*printf("DEBBUG: char name");	
			for (int j = 0; j < 41; j++) {
				printf("'%c', ", workout[i/2].name[j]);
			}
		printf("\n");
		*/
		}
		else if (i % 2 == 1) {
			strcpy(workout[i/2].muscles, buffer);
			// printf("DEBUG: assigning muscles %s\n", workout[i/2].muscles);
		}

		workout[i/2].weight = 0;
		workout[i/2].time = 0;
		workout[i/2].sets = 0;
		workout[i/2].reps = 0;
	}	
		//printf("DEBUG: EXERCISE, MUSCLES, WEIGHT, TIME, SETS, REPS\n"
		//		 "%s, %s, %d, %d, %d, %d\n", workout[1].name, workout[1].muscles, workout[1].weight, workout[1].time, workout[1].sets, workout[1].reps);
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
	// freopen("dev/tty", "rw", stdin);
	// Even on virtual machine, only gets input if this line commented out
	// What is going on here??

	int i;

	for (i=0; i < arraySize; i++) {
		// Some newlines look weird on local, but gradescope moment
		printf("\n%s for %s:", workout[i].name, workout[i].muscles);

		// if (i != 6 && i != 10) {
		if ( !(strcmp(workout[i].name, "leg_raises") == 0) && 
			!(strcmp(workout[i].name, "situps/crunches") == 0) ) {
			printf("\n\tWeight: ");
			scanf("%d", &workout[i].weight);
		}
		// if (i == 4 || i == 5 || i == 6 || i == 10) {
		if ( (strcmp(workout[i].name, "hip_thrust") == 0) ||
			(strcmp(workout[i].name, "russian_twists") == 0) ||
			(strcmp(workout[i].name, "leg_raises") == 0) ||
			(strcmp(workout[i].name, "situps/crunches") == 0) ) {
			printf("\n\tTime: ");
			scanf("%d", &workout[i].time);
		}
		printf("\n\tSets: ");
		scanf("%d", &workout[i].sets);
		printf("\n\tReps: ");
		scanf("%d", &workout[i].reps);
		// printf("\n");
	}
	printf("\n");
}

