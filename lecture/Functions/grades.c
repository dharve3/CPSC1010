/* grades.c 

	will average together some grades
	and print the result to the user

*/

#include <stdio.h>



int main(void) {
	int numGrades, i, sum = 0;
	float avg;
	
	printf("How many grades do you have? ");
	scanf("%i", &numGrades);

	int gradesArray[numGrades]; // can't declare until find size from user

	// initialize array
	for (i = 0; i < numGrades; ++i) {
		printf("Enter a grade: "); // comment out this print statement
											// if redirecting input from a file
		scanf("%i", &gradesArray[i]);
	} 

	// get the average of the grades
	for (i = 0; i < numGrades; i++) {
		sum += gradesArray[i];
	}
	avg = ((float)sum / numGrades);
	printf("\n\navg is %.2f \n\n", avg);

	return 0;
}



