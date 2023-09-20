/* minValue.c */


#include <stdio.h>

int main() {
	int array1[] = { 157, -28, -37, 26, 10 };
	int array2[] = { 12, 45, 1, 10, 5, 3, 22 };
	int min, i; 


	/* **************************************** */
	// find the minimum value in array1:
	
	min = array1[0];
	for (i=0; i<5; i++) {
		if (array1[i] < min)
			min = array1[i];
	}


	printf("\nminimum value: %d\n\n", min);


	/* **************************************** */
	// find the minimum value in array2:
	
	min = array2[0];
	for (i=0; i<7; i++) {
		if (array2[i] < min)
			min = array2[i];
	}


	printf("\nminimum value: %d\n\n", min);


	return 0;
}
