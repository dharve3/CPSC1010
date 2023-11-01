#include <stdio.h>

int main() {
	int month;

	printf("\nEnter month number: ");
	scanf("%d", &month);

	if ( (month == 1) || (month == 3) || (month == 5) || (month == 7) ||
		  (month == 8) || (month == 10) || (month == 12) )
		printf("\nThe number of days is 31.\n\n");
	else if ( (month == 4) || (month == 6) || (month == 9) || (month == 11) ) 
		printf("\nThe number of days is 30.\n\n");
	else 
		printf("\nThe number of days is 28 or 29.\n\n");


	return 0;
}
	



