#include <stdio.h>

// Function declaration
int getMin(int theArray[], int size);

int main() {
	int array1[] = { 157, -28, -37, 26, 10 };
	int array2[] = { 12, 45, 1, 10, 5, 3, 22 };
	int min; 
		
	// NOTE: You can determine size externally per array here
	int size1 = sizeof(array1) / sizeof(array1[0]);
	printf("DEBUG: size1 == %d", size1);
	// OR: pass it thorugh manually (any int works but match size to array duh)

	// function call 1
	min = getMin(array1, size1);
	/*min = array1[0];
	for (int i = 1; i < 5; i++) {
		if (min > array1[i])
			min = array1[i];
	}*/

	printf("\nminimum value: %d\n\n", min);

	// NOTE: Size using same method for array2
	int size2 = sizeof(array2) / sizeof(array2[0]);
	printf("DEBUG: size2 == %d", size2);
	// function call 2
	min = getMin(array2, size2);
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
	
	/* NOTE: I'm under the impression it is impossible to determine size of
	the array using this method as arrays decay to pointers when passed 
	through to a function as an argument.*/
	// int temp1 = sizeof(theArray);
	// int temp2 = sizeof(theArray[0]);
	// int temp3 = sizeof(arr);
	// size = sizeof(theArray) / sizeof(theArray[0]);
	// printf("DEBUG: sizeof(theArray) == %d, sizeof(theArray[0]) == %d\n", temp1, temp2);
	// printf("DEBUG: size == %d\n", size);
	// printf("DEBUG: pointer size == %d", temp3);

	minimum = theArray[0];
	for (int i = 1; i < size; i++) {
		if (minimum > theArray[i])
			minimum = theArray[i];
	}
	return minimum;
}
