/* open a file for reading */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	FILE *inFile;
	int number;

	inFile = fopen(argv[1], "r");
	if (inFile == NULL) {
		fprintf(stderr, "File open error.  Exiting program\n");
		exit(1);   // or  exit(EXIT_FAILURE);
	}

	fscanf(inFile, "%d", &number);
	printf("The number from the file is:  %d\n", number);
	
	fclose(inFile);
	return 0;
}

