/*	initArrays.c
	Dylan Harvey
	11/20/2023
	Contains function used in asg2.c in main()
*/

#include "defs.h"

// initalizes the array from an input file of exercises and MET values
// inputs: inFile file pointer, array of exersises, array of met values
// output: none, though using pointers, assignes values to the input arrays
void initArrays(FILE *inFile, char exercises[NUM_EXERCISES][MAX_LINE], double mets[]) {
	int i, j;
	char line_in[MAX_LINE];

	for (i = 0; i/2 < NUM_EXERCISES; i++) {
		if (i % 2 == 0) {
			fgets(line_in, MAX_LINE, inFile);
			// printf("line_in: %s", line_in);
			// printf("Assigning 2D:\n");
			for (j = 0; j < MAX_LINE; j++) {
				exercises[i/2][j] = line_in[j];
				// printf("'%c', ", line_in[j]);
			}
		}
		else if (i % 2 == 1) {
			fscanf(inFile, "%lf\n", &mets[i/2]);
			// printf("Assigning 1D: %lf\n", mets[i/2]);
		}
	}
}
