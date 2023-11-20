/*	getResults.c
	Dylan Harvey
	11/20/2023
	CPSC-1010-020
	Contains functions used in asg2.c in main()
*/

#include "defs.h"

// prints the result of the calculation
// inputs: user's exercise choice, user's weight, array of met values
// output: none
void printResults(int choice, double weight, double mets[]) {
	int duration;
	double calories;


	printf("Duration (minutes): ");
	scanf("%d", &duration);

	// Calculate
	calories = duration * (mets[choice-1] * 3.5 * (weight/2.205)) / 200;

	printf("\nThe total calories burned: %.1lf\n\n", calories);

}
