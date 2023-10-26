/*	Dylan Harvey
	10/29/2023
	CPSC-1010-020
	Takes file input and user input to calculate number of calories
	burned while doing various exerceises, by using MET formula.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUM_EXERCISES = 37;
const int MAX_LINE = 105;

int main(void) {
	int i, j, repeat, exercise, duration;
	double weight, calories;

	char line_in[MAX_LINE];
	char met_types[NUM_EXERCISES][MAX_LINE];
	double met_values[NUM_EXERCISES];

	// read input from file
	for (i = 0; i/2 < NUM_EXERCISES; i++) {
		// printf("-----------------------------------\n");
		// printf("DEBUG: i = %d, i/2 = %d, imod2 = %d\n", i, i/2, i%2);
		if (i % 2 == 0) {
			fgets(line_in, MAX_LINE, stdin);
			// printf("DEBUG: Line In: %s", line_in);
			// printf("DEBUG: Assigning 2D\n");
			for (j = 0; j < MAX_LINE; j++) {
				met_types[i/2][j] = line_in[j];
				// printf("'%c' ", line_in[j]);
			}
			// printf("DEBUG: String: %s", met_types[i/2]);
		}
		else if (i % 2 == 1) {
			// printf("DEBUG: Assigning 1D\n");
			scanf("%lf\n", &met_values[i/2]);
			// printf("DEBUG: MET Level: %lf\n", met_values[i/2]);
		}
	}
	// get values from user
	// COMMENT THIS LINE OUT BEFORE GRADESCOPE SUBMISSION:
	freopen("/dev/tty", "rw", stdin);
	
	printf("\nYour weight (pounds): ");
	scanf("%lf", &weight);

	// Repeat until user says to stop
	do {
		printf("\n\n\n");
		for (i = 0; i/2 < NUM_EXERCISES; i++)
			if (i % 2 == 0)
				printf("%d. %s", (i/2)+1, met_types[i/2]);
		printf("\n\n\n");

		printf("Choose exercise: ");
		scanf("%d", &exercise);
		while (exercise > NUM_EXERCISES) {
			printf("\n\nChoose exercise: ");
			scanf("%d", &exercise);
		}
		printf("Duration (minutes): ");
		scanf("%d", &duration);

		// Calculate
		// printf("DEBUG: Chosen: %s", met_types[exercise-1]);
		// printf("DEBUG: %lf, postion %d", met_values[exercise-1], exercise);
		// Note exercise -1; because the list displays the values with +1
		calories = duration * (met_values[exercise-1]*3.5*(weight/2.205))/200;

		printf("\nThe total calories burned: %.1lf\n\n", calories);

		printf("Would you like to choose another exercise?"
				 " 1 for yes, 0 for no: ");
		scanf("%d", &repeat);

		while (repeat != 0 && repeat != 1) {
			printf("Would you like to choose another exercise?"
					 " 1 for yes, 0 for no: ");
			scanf("%d", &repeat);
		}
	} while (repeat == 1);

}
