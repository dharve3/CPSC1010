#include <stdio.h>

int main() {
	int month;

	printf("\nEnter month number: ");
	scanf("%d", &month);

	switch(month) {
		case(1):
		case(3):
		case(5):
		case(7):
		case(8):
		case(10):
		case(12):
			printf("\nThe number of days is 31.\n\n");
			break;
		case(4):
		case(6):
		case(9):
		case(11):
			printf("\nThe number of days is 30.\n\n");
			break;
		default:
			printf("\nThe number of days is 28 or 29.\n\n");
	}

	return 0;
}
	


