#include <stdio.h>

int main() {
	int grade, sum, howMany, count;
	float average;

	printf("How many grades will you be entering? \n");
	scanf("%d", &howMany);

	// use count as the control variable so that howMany stays the same
	count = howMany;
	sum = 0;


	// re-write the following while loop as a for loop
	// and then again as a do-while loop
	while (count > 0) {
		printf("Enter a grade: \n");
		scanf("%i", &grade);
		sum += grade;
		count = count - 1;  // same as:   count--;
	}

	average = (float)sum / howMany;
	printf("The average is: %.2f\n\n", average);

	return 0;
}

