/* grades.c 

	will average together some grades
	and print the result to the user

*/

#include <stdio.h>

void initArray (int theArray[], int howMany);
float getAvg (int theArray[], int howMany);

int main(void) {
	int numGrades, i, sum = 0;
	float avg;
	
	printf("How many grades do you have? ");
	scanf("%i", &numGrades);

	int gradesArray[numGrades]; // can't declare until find size from user

	// initialize array
	initArray(gradesArray, numGrades);

	// get the average of the grades
	avg = getAvg(gradesArray, numGrades);
	printf("\n\navg is: %.2f \n\n", avg);

	return 0;
}


void initArray (int theArray[], int howMany) {	
	for (int i = 0; i < howMany; ++i) {
		printf("Enter a grade: "); // comment out this print statement
											// if redirecting input from a file
		scanf("%i", &theArray[i]);
	} 
}

float getAvg (int theArray[], int howMany) {
	int sum = 0;
	float average;
	for (int i = 0; i < howMany; i++) {
		sum += theArray[i];
	}
	average = ((float)sum / howMany);
	return average;
}

