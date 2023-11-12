/* open a file for writing */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;

	fprintf(stderr, "Enter a number:  ");
	fscanf(stdin, "%d", &number);
	fprintf(stderr, "The number entered was: %d\n", number);

	fprintf(stdout, "%d\n", number);
		
	return 0;
}

