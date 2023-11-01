#include <stdio.h>

int main() {
	char letter_grade;
	float points = 0;   // gpa = 0;
	int validInput = 1;

	printf("Enter letter grade: ");
	scanf("%c", &letter_grade);

	switch(letter_grade) {
		case('A'):
		case('a'):
			points = 4.0;
			break;
		case('B'):
		case('b'):
			points = 3.0;
			break;
		case('C'):
		case('c'):
			points = 2.0;
			break;
		case('D'):
		case('d'):
			points = 1.0;
			break;
		case('F'):
		case('f'):
			points = 0.0;
			break;
		default:
			validInput = 0;
			printf("\nInvalid input\n\n");	
	}

	// rest of code to compute gpa:
	if (validInput)
		printf("\n\npoints:  %.1f\n\n", points);


	return 0;
}
	


