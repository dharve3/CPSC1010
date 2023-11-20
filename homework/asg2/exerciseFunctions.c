/*	exerciseFunctions.c
	Dylan Harvey
	11/20/2023
	CPSC-1010-020
	Contains functions used throughout asg2.c in main()
*/

#include "defs.h"

// gets the choice of exercise from the user
// inputs: array of exercises
// output: the choice from the user
int getChoice(char exercises[NUM_EXERCISES][MAX_LINE]) {
	int choice;

	printExercises(exercises);

	printf("Choose exercise: ");
	scanf("%d", &choice);

	while (choice > NUM_EXERCISES) {
		printf("\n\nChoose exercise: ");
		scanf("%d", &choice);
	}

	return choice;
}

// prints the array of exercises with numbers
// inputs: the array of exercises
// output: none
void printExercises(char exercises[NUM_EXERCISES][MAX_LINE]) {
	int i;
	
	printf("\n");
	for (i = 0; i/2 < NUM_EXERCISES; i++)
		if (i % 2 == 0)
			printf("%d. %s", (i/2)+1, exercises[i/2]);
	printf("\n\n\n");
}
