#include <stdio.h>

int main() {
	char letter_grade;
	float points = 0;   // gpa = 0;
	int validInput = 1;

	printf("Enter letter grade: ");
	scanf("%c", &letter_grade);

	if ( (letter_grade == 'A') || (letter_grade == 'a') )
		points = 4.0;
	else if ( (letter_grade == 'B') || (letter_grade == 'b') )
		points = 3.0;
	else if ( (letter_grade == 'C') || (letter_grade == 'c') )
		points = 2.0;
	else if ( (letter_grade == 'D') || (letter_grade == 'd') )
		points = 1.0;
	else if ( (letter_grade == 'F') || (letter_grade == 'f') )
		points = 0.0;
	else {
		validInput = 0;
		printf("\nInvalid input.\n\n");
	}

	// rest of code to compute gpa:
	if (validInput)
		printf("\n\npoints:  %.1f\n\n", points);


	return 0;
}
	


