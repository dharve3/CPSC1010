/*	generateFib.c
	Dylan Harvey


*/

#include "defs.h"

int * generateFibonacci ( int size ) {
	int * array;
	int i;
	
	array = (int *) malloc(size * sizeof(int)); 
	
	if (array == NULL) {
		fprintf(stderr, "Error initalizing array\n");
		exit(1);
	}
	
	for (i=0; i < size; i++) {
		if (i == 0 || i == 1) {
			array[i] = 1;
		}
		else {
			array[i] = array[i-2] + array[i-1];
		}
	}

	return array;
}
