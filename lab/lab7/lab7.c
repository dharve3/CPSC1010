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
void initArrays(double levels[], char types[][MAX_LINE]);
double getUserInput();
void printCaloriesNeeded(double basal_metabolic_rate, double levels[],
	char types[][MAX_LINE]);

int main(void) {
	char activity_type[NUM_ACTIVITIES][MAX_LINE];
	double activity_level[NUM_ACTIVITIES];
	double bmr;

	// Initalize Arrays
	initArrays(activity_level, activity_type);
	
	// COMMENT THIS LINE OUT BEFORE GRADESCOPE SUBMISSION:
	freopen("/dev/tty", "rw", stdin);
	
	// Ask user for values
	bmr = getUserInput();

	// Print BMR results
	printf("\n\nYour BMR (basal metabolic rate) is %.1lf", bmr);
	printf("\n\nBMR represents the amount of calories you burn at rest."
			 "\n\nTotal daily calories needed to maintain your current weight\n"
			 "at your activity level is BMR * activity level value:\n\n");
	
	// Calculate and print daily calorie intake results
	printCaloriesNeeded(bmr, activity_level, activity_type);

}

/* ------------------------------------------------------------ */
/* initalizes arrays from stdin (redirection of file expected)
	parameters: levels[], types[][] (The activity levels and types)
	return: none
*/
void initArrays(double levels[], char types[][MAX_LINE]) {
	int i, j;
	char line_in[MAX_LINE];
	for (i = 0; i/2 < NUM_ACTIVITIES; i++) {
		if (i % 2 == 0) {
			fgets(line_in, MAX_LINE, stdin);
			for (j = 0; j < MAX_LINE; j++) {
				types[i/2][j] = line_in[j];
			}
		}
		else if (i % 2 == 1) {
			scanf("%lf\n", &levels[i/2]);
		}
	}
}

/* ------------------------------------------------------------ */
/*	gets user input: boy or girl, weight, height, & age
 	and calculates the BMR value for that user
 	parameters: none
 	return: the BMR value
*/
double getUserInput() {
	int gender, weight_lbs, height_in, age;
	float weight_kg, height_cm;
	double basal_metabolic_rate;

	while (gender != 1 && gender != 2) {
		printf("\n\nAre you a boy or a girl? 1 for boy, 2 for girl: ");
		scanf("%d", &gender);
	}
	printf("Your weight (pounds): ");
	scanf("%d", &weight_lbs);
	printf("Your height (inches): ");
	scanf("%d", &height_in);
	printf("Your age (years): ");
	scanf("%d", &age);
	
	// Calculate values
	weight_kg = (float)weight_lbs / 2.205;
	height_cm = height_in * 2.54;

	if (gender == 1)
		basal_metabolic_rate = (10 * weight_kg + 6.25 * height_cm - 5 * age + 5);
	else if (gender == 2)
		basal_metabolic_rate = (10 * weight_kg + 6.25 * height_cm - 5 * age - 161);
	
	return basal_metabolic_rate;
}

/* ------------------------------------------------------------ */
/*	prints the calories needed for each activity level.
	parameters: bmr, levels[], & types[][] (the calculated bmr,
	and the activity levels and types)
	returns: none
*/
void printCaloriesNeeded(double basal_metabolic_rate, double levels[],
   char types[][MAX_LINE]) {
	int i;
	double calories;

	for (i = 0; i < NUM_ACTIVITIES; i++) {
		calories = basal_metabolic_rate * levels[i];
		printf("%.1lf calories per day for %s", calories, types[i]);
	}
}
