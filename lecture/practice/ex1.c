#include <stdio.h>
#include <string.h>

typedef struct {
	char month[4];
	int day, year;
} dob;

int main(int argc, char *argv[]) {
	dob bday;
	// dob bday = {"Jan", 31, 1967}; 

	printf("\nEnter your birthday with 3 letter month day year:  ");
	scanf("%s %d %d", bday.month, &bday.day, &bday.year);
	// No '&' for array since it already refs address
	
	printf("\nYour birthday is: %s %d, %d\n\n", bday.month, bday.day, bday.year);

	return 0;
}

