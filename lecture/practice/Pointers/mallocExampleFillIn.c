/*   exchange sort with 
     sorting in a function and
     printing of the array in a function

	uses malloc
*/

#include <stdio.h>
#include <stdlib.h>

void sortArray(int *, int);
void printArray(int [], int); 


int main(void) {
	int * aPtr = NULL;
	// declare an integer pointer called aPtr and initialize it to NULL
	aPtr = (int *) malloc(sizeof(int) * 8);
	// assign to that pointer dynamically allocated space for 8 integers 
	
	if (aPtr == NULL) {
	   printf("error with malloc\n");
	   exit(1);
	}

	// using the pointer, assign these values to each 
	//    of the eight memory locations
	// 2  1  7  4  -6  9  5  -3
	*aPtr = 2;
	*(aPtr + 1) = 1;
	*(aPtr + 2) = 7;
	*(aPtr + 3) = 4;
	*(aPtr + 4) = -6;
	*(aPtr + 5) = 9;
	*(aPtr + 6) = 5;
	*(aPtr + 7) = -3;
	
	/*
	aPtr[0] = 2;
	aPtr[1] = 1;
	aPtr[2] = 7;	
	aPtr[3] = 4;
	aPtr[4] = -6;
	aPtr[5] = 9;
	aPtr[6] = 5;
	aPtr[7] = -3;
	*/
	
	// Ill use a loop eventually lol
	
	// call printArray sending to it the pointer and the number of items
	printArray(aPtr, 8);
	
	// call sortArray sending to it the pointer and the number of items
	sortArray(aPtr, 8);
	
	// call printArray again sending to it the pointer and the number of items
	printArray(aPtr, 8);

	free(aPtr);
	return 0;
}


void sortArray(int *arrayPtr, int size) {
	int i, j, temp;
	for ( i = 0; i < (size - 1); i++ ) {
		for ( j = i + 1; j < size; j++ ) {
			if ( *(arrayPtr + i) > *(arrayPtr + j) ) {
				temp = *(arrayPtr + i);
				*(arrayPtr + i) = *(arrayPtr + j);
				*(arrayPtr + j) = temp;
			}
	   }
	   printArray(arrayPtr, size);  // after each pass
	}
}


void printArray(int theArray[], int size) {
	int i;
	for ( i = 0; i < size; i++ ) 
		   printf(" %i ", theArray[i]);
	printf("\n");
}


