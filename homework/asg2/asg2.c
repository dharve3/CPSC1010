/*	asg2.c
	Dylan Harvey
	11/20/2023
	CPSC-1010-020
	Takes file input and user input to calculate number of calories
	burned while doing various exerceises, by using MET formula.
	Contains functions from getResults.c initArrays.c exercriseFunctions.c
*/

#include "defs.h"

int main(int argc, char * argv[]) {
	int exercise_choice, repeat;
	double weight;

	char met_types[NUM_EXERCISES][MAX_LINE];
	double met_values[NUM_EXERCISES];

	FILE *inFile;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <file_name>\n", argv[0]);
		exit(1);
	}
	
	// printf("DEBUG: argc: %d, argv[0]: %s, argv[1]: %s\n", argc, argv[0], argv[1]);

	inFile = fopen(argv[1], "r");
	if (inFile == NULL) {
		fprintf(stderr, "File open error. Exiting Program.\n");
		exit(2);
	}


	// read input from file
	initArrays(inFile, met_types, met_values);

	// get values from user
	// COMMENT THIS LINE OUT BEFORE GRADESCOPE SUBMISSION:
	freopen("/dev/tty", "rw", stdin);
	// printf("Anti-Gradescoped");
	
	printf("\nYour weight (pounds): ");
	scanf("%lf", &weight);

	// Repeat until user says to stop
	do {
		exercise_choice = getChoice(met_types);
		
		printResults(exercise_choice, weight, met_values);
		
		printf("Would you like to choose another exercise?"
				 " 1 for yes, 0 for no: ");
		scanf("%d", &repeat);

		while (repeat != 0 && repeat != 1) {
			printf("Would you like to choose another exercise?"
					 " 1 for yes, 0 for no: ");
			scanf("%d", &repeat);
		}
	} while (repeat == 1);

	fclose(inFile);
	return 0;
}
