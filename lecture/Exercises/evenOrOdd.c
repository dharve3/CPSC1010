/* evenOrOdd.c
	determines if a number 
	is even or odd
	Dylan Harvey
	8/30/2023
*/

#include <stdio.h>

int main(void) {
	int aNumber = 12;

	if (aNumber % 2 == 0)
		printf("%i is even\n", aNumber);
	else
		printf("%i is odd\n", aNumber);
	
	return 0;
	}

