/* open a file for writing */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *outFile;
	int number;

	outFile = fopen("output.dat", "w");
	if (outFile == NULL) {
		fprintf(stderr, "Output failure.  Exiting program\n");
		exit(2);
	}

	fprintf(stdout, "Enter a number:  ");
	fscanf(stdin, "%d", &number);
	fprintf(stdout, "The number entered was: %d\n", number);
	fprintf(stderr, "The number entered was: %d\n", number);

	fprintf(outFile, "%d", number);
		
	fclose(outFile);
	return 0;
}

