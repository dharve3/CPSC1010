/*	Dylan Harvey
	10/24/2023
	CPSC-1011-002
	Calculates BMR from user input and determines
	daily calorie intake per activity level
	Uses functions!
*/

#include "defs.h"

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
