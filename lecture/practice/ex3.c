#include <stdio.h>

typedef struct {
	char month[4];
	int day, year;
} dob;

int main(int argc, char *argv[]) {
	dob bday;
	// compund literal
	// bday = (dob) { .month = "Jan", .day = 31, .year = 1967 };  
	sscanf(argv[1], "%s", bday.month);
	sscanf(argv[2], "%d", &bday.day);
	sscanf(argv[3], "%d", &bday.year);

	printf("\nYour birthday is: %s %d, %d\n\n", bday.month, bday.day, bday.year);

	return 0;
}







