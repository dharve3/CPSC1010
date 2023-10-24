/*	Dylan Harvey
	10/24/2023
	CPSC-1011-002
	Calculates BMR from user input and determines
	daily calorie intake per activity level
	Uses functions!
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUM_ACTIVITIES = 5;
const int MAX_LINE = 20;

// Function Prototypes:
void initArrays(float activity_level[], char activity_type[][MAX_LINE]);
double getUserInput();
void printCaloriesNeeded(double bmr, double activity_level[],
	char activity_type[][MAX_LINE]);

int main(void) {
	int i, j, gender, weight_lbs, height_in, age;
	float weight_kg, height_cm;
	double bmr, calories;
	char line_in[MAX_LINE];
	char activity_type[NUM_ACTIVITIES][MAX_LINE];
	float activity_level[NUM_ACTIVITIES];

	// Get values from redirection
	for (i = 0; i/2 < NUM_ACTIVITIES; i++) {
		if (i % 2 == 0) {
			fgets(line_in, MAX_LINE, stdin);
			for (j = 0; j < MAX_LINE; j++) {
				activity_type[i/2][j] = line_in[j];
			}
		}
		else if (i % 2 == 1) {
			scanf("%f\n", &activity_level[i/2]);
		}
	}
	// Ask user for values
	// COMMENT THIS LINE OUT BEFORE GRADESCOPE SUBMISSION:
	freopen("/dev/tty", "rw", stdin);

	while (gender != 1 && gender != 2) {
		printf("\n\nAre you a boy or a girl? 1 for boy, 2 for girl: ");
		scanf("%d", &gender);
	}
	printf("\nYour weight (pounds): \n");
	scanf("%d", &weight_lbs);
	printf("Your height (inches): \n");
	scanf("%d", &height_in);
	printf("Your age (years): \n");
	scanf("%d", &age);
	
	// Calculate values
	weight_kg = (float)weight_lbs / 2.205;
	height_cm = height_in * 2.54;

	if (gender == 1)
		bmr = (10 * weight_kg + 6.25 * height_cm - 5 * age + 5);
	else if (gender == 2)
		bmr = (10 * weight_kg + 6.25 * height_cm - 5 * age - 161);

	// Print BMR results
	printf("\n\nYour BMR (basal metabolic rate) is %.1lf", bmr);
	printf("\n\nBMR represents the amount of calories you burn at rest."
			 "\n\nTotal daily calories needed to maintain your current "
			 "weight at a\nparticular activity levels is "
			 "your BMR * that activity level value:\n\n");
	
	// Calculate and print daily calorie intake results
	for (i = 0; i < NUM_ACTIVITIES; i++) {
		calories = bmr * activity_level[i];
		printf("%.1lf calories per day for %s", calories, activity_type[i]);
	}

}
