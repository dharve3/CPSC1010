#include <stdio.h>

// 1. define a structure called  dob  that contains an array for month,
//    an integer for day, and an integer for year
typedef struct {
	char month[4];
	int day, year;
} dob;

int main(int argc, char *argv[]) {
	// 2. declare a variable  bday  whose type is the structure  dob
	//    that was defined with typedef
	dob bday;

	// show  scanf()  statements to get the values entered by the
	// user into the variable  bday:
	printf("Enter your birthmonth (3 letter month abbreviation):  ");
	// 3. scanf() for month:
	scanf("%s", bday.month);

	printf("Enter an integer for your birth day:  ");
	// 4. scanf() for day:
	scanf("%d", &bday.day);

	printf("Enter and integer for your birth year:  ");
	// scanf() for year:
	scanf("%d", &bday.year);

	// 5. finish the printf statement below
	// printf("Your birthday is: %s %d, %d\n", );
	printf("Your birthday is: %s %d, %d\n", bday.month, bday.day, bday.year);

	return 0;
}

// 6. Function prototype for typedef struct month, takes array of month as param called theMonths
// void printMonths(month theMonths[]);

// 7. Struct date, missing function header
// struct date dateUpdate(struct date today)

// 8. 
// dateAndTime event;

// 9.
// 
