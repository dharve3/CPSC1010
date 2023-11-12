/* open a file for reading */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;

	fscanf(stdin, "%d", &number);
	fprintf(stdout, "The first number from the file is:  %d\n", number);
	fprintf(stderr, "The first number from the file is:  %d\n", number);
	
	return 0;
}

