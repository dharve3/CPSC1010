/* gets user input: boy or girl, weight, height, & age
	and calculates the BMR value for that user
	parameters: none
	return: the BMR value
*/

#include "defs.h"

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
