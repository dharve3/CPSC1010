/* open a file for writing */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

	FILE *inFile;
	FILE *outFile;
	int number;

	inFile = fopen(argv[1], "r");
	outFile = fopen(argv[2], "w");
	if (inFile == NULL) {
		fprintf(stderr, "Input failure.  Exiting program\n");
		exit(2);
	}
	if (outFile == NULL) {
		fprintf(stderr, "Output failure.  Exiting program\n");
		exit(3);
	}

	fprintf(stdout, "Enter a number:  ");
	fscanf(inFile, "%d", &number);
	fprintf(stdout, "The number entered was: %d\n", number);

	fprintf(outFile, "%d", number);
		
	fclose(outFile);
	return 0;
}

