#include <stdio.h>

// Function declaration
int getMin(int theArray[], int size);

int main() {
	int array1[] = { 157, -28, -37, 26, 10 };
	int array2[] = { 12, 45, 1, 10, 5, 3, 22 };
	int min; 
		

	// function call 1
	min = getMin(array1, 5);
	/*min = array1[0];
	for (int i = 1; i < 5; i++) {
		if (min > array1[i])
			min = array1[i];
	}*/

	printf("\nminimum value: %d\n\n", min);

	// function call 2
	min = getMin(array2, 7);
	/* min = array2[0];
	for (int i = 1; i < 7; i++) {
		if (min > array2[i])
			min = array2[i];
	}*/


	printf("\nminimum value: %d\n\n", min);


	return 0;
}

// function to get the minimum value from an array
int getMin(int theArray[], int size) {
	// local vars
	int minimum;
	// int size;

	// size = sizeof(theArray) / sizeof(theArray[0]);
	// This doesnt work since sizeof(theArray) returns the sizeof(int *)
	minimum = theArray[0];
	for (int i = 1; i < size; i++) {
		if (minimum > theArray[i])
			minimum = theArray[i];
	}
	return minimum;
}
