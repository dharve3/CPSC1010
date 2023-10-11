/* grades.c 

	will average together some grades
	and print the result to the user

	split into functions
*/

#include "defs.h"


int main(void) {
	int numGrades;
	float avg;

	printf("How many grades do you have? ");
	scanf("%i", &numGrades);

	int gradesArray[numGrades]; // can't declare until find size from user

	initArray(gradesArray, numGrades);
	avg = getAvg(gradesArray, numGrades);

	printf("avg is %.2f \n\n", avg);

	return 0;
}



