#include <stdio.h>

typedef struct {
	char month[4];
	int day, year;
} dob;

int main(int argc, char *argv[]) {
	dob bday;
	bday = (dob) { "Jan", 31, 1967 };  // compound literal  
	printf("\nYour birthday is: %s %d, %d\n\n", bday.month, bday.day, bday.year);

	return 0;
}







