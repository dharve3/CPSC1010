/*	prints the calories needed for each activity level.
	parameters: bmr, levels[], & types[][] (the calculated bmr,
	and the activity levels and types)
	returns: none
*/

#include "defs.h"

void printCaloriesNeeded(double basal_metabolic_rate, double levels[],
	char types[][MAX_LINE]) {
	int i;
   double calories;
	for (i = 0; i < NUM_ACTIVITIES; i++) {
		calories = basal_metabolic_rate * levels[i];
      printf("%.1lf calories per day for %s", calories, types[i]);
  }
}
