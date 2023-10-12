/*	Dylan Harvey
	10/03/2023
	CPSC-1011-002
	Description Here
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUM_ACTIVITIES = 5;
const int MAX_LINE = 20;

int main(void) {
	// read input from file
	int i, j, gender, weight_lbs, height_in, age;
	float weight_kg, height_cm;
	double BMR, calories;
	char line_in[MAX_LINE];
	char activity_type[NUM_ACTIVITIES][MAX_LINE];
	float activity_level[NUM_ACTIVITIES];

	for (i = 0; i/2 < NUM_ACTIVITIES; i++) {
		// printf("-----------------------------------\n");
		// printf("DEBUG: i = %d, i/2 = %d, imod2 = %d\n", i, i/2, i%2);
		if (i % 2 == 0) {
			fgets(line_in, MAX_LINE, stdin);
			// printf("DEBUG: Line In: %s", line_in);
			// printf("DEBUG: Assigning 2D\n");
			for (j = 0; j < MAX_LINE; j++) {
				activity_type[i/2][j] = line_in[j];
				// printf("Char: '%c' ", line_in[j]);
			}
			// printf("DEBUG: String: %s", activity_type[i/2]);
		}
		else if (i % 2 == 1) {
			// printf("DEBUG: Assigning 1D\n");
			scanf("%f\n", &activity_level[i/2]);
			// printf("DEBUG: Activity Level: %f\n", activity_level[i/2]);
		}
	}
	// Ask user for values
	// COMMENT THIS LINE OUT BEFORE GRADESCOPE SUBMISSION:
	// freopen("/dev/tty", "rw", stdin);

	while (gender != 1 && gender != 2) {
		printf("\n\nAre you a boy or a girl? 1 for boy, 2 for girl: ");
		scanf("%d", &gender);
	}
	printf("\nYour weight (pounds): ");
	scanf("%d", &weight_lbs);
	printf("Your height (inches): ");
	scanf("%d", &height_in);
	printf("Your age (years): ");
	scanf("%d", &age);
	
	// calculate values
	weight_kg = (float)weight_lbs / 2.205;
	height_cm = height_in * 2.54;

	if (gender == 1) {
		// printf("DEBUG: Calculating for boy");
		BMR = (10 * weight_kg + 6.25 * height_cm - 5 * age + 5);
	}
	else if (gender == 2) {	
		// printf("DEBUG: Calculating for girl");
		BMR = (10 * weight_kg + 6.25 * height_cm - 5 * age - 161);
	}
	// print results
	printf("\n\nYour BMR (basal metabolic rate) is %.1lf", BMR);
	printf("\n\nBMR represents the amount of calories you burn at rest."
			 "\n\nTotal daily calories needed to maintain your current "
			 "weight at a\nparticular activity levels is "
			 "your BMR * that activity level value:\n\n");
	
	// calculate and print daily calorie intake results
	for (i = 0; i < NUM_ACTIVITIES; i++) {
		calories = BMR * activity_level[i];
		printf("%.1lf calories per day for %s", calories, activity_type[i]);
	}

}
