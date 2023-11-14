/*	printResults.c
	Dylan Harvey


*/

#include "defs.h"

void printHistogram( int fibArray[], int size ) {
	int i, j;
	for (i=0; i < size; i++) {
		for (j=0; j < fibArray[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
}
