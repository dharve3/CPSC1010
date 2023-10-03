#include <stdio.h>

int main() {
	
	// declare 2 arrays 
	//		numArray1 of size 9, unitialized
	// 	numArray2 of size 9, initialized to all zeroes 
	int numArray1[9];
	int numArray2[9] = {0};
	int array2[ ] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++)
		printf("%d", array2[i]);

	// assign the value 12 to the third element in numArray1
	numArray1[2] = 12;

	// assign the value 5 to the second element in numArray1
	numArray2[1] = 5;

	// assign the value in the third element in numArray1 to the 
	// 	seventh element of numArray2 
	numArray2[6] = numArray1[2];

	// print all the values in numArray1
	printf("\n\nnumArray1 contains: \n");
	for (int i = 0; i < 9; i++) {
		printf("%d, ", numArray1[i]);
	}
	// numArray1 is uninitalized so it gives varying values for anything not at index 2

	// print all the values in numArray2
	printf("\n\nnumArray2 contains: \n");
	for (int i = 0; i < 9; i++) {
		printf("%d, ", numArray2[i]);
 	}

	printf("\n\n");

	return 0;
}




