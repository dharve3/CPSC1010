#include <stdio.h>

int main() {
	int i;
	int grade, sum, howMany, count;
	float average;

	printf("How many grades will you be entering? \n");
	scanf("%i", &howMany);

	// blah blah
	count = howMany;
	sum = 0;
	
	/*
	while (count > 0) {
		printf("Enter a grade: \n");
		scanf("%i", &grade);
		sum += grade;
		count = count - 1;
	}
	*/
	
	/*
	for (i = count; i > 0; i--) {
		printf("Enter a grade: \n");
		scanf("%i", &grade);
		sum += grade;
	}
	*/

	do {
		printf("Enter a grade: \n");
		scanf("%i", &grade);
		sum += grade;
		count -= 1;
	}
	while(count > 0);

	average = (float)sum / howMany;
	printf("The average is: %f\n\n", average);

	return 0;
}
