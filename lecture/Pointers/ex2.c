#include <stdio.h>

int main(void) {
	// declare an array called arr1 of size 8
	// initialize with these values: 2  1  7  4  -6  9  5  -3
	int arr1[8] = {2, 1, 7, 4, -6, 9, 5, -3};

	// declare a pointer called arr1Ptr 
	// initialize it to point to that array declared above
	int * arr1Ptr = arr1;

	// print statement to print the value of the last element
	// using array subscript notation
	printf("%d \n", arr1[7]); // -3
	
	// print statement to print the value of the last element
	// using the pointer
	printf("%d \n", *(arr1Ptr + 7)); // -3

	// where is the arr1Ptr pointing to now? -> arr1[0]
	printf("\n %d \n", *arr1Ptr); // 2

	// change value of 2nd element to -5 using array subscript notation
	arr1[1] = -5;

	// change value of 4th element to 8 using pointer
	*(arr1Ptr + 3) = 8;

	// where is the arr1Ptr pointing to now? -> arr1[0]
	printf("%d \n", *arr1Ptr);   // 2

	arr1Ptr = arr1Ptr + 4;
	// where is the arr1Ptr pointing to now? -> arr1[5]
	// print the value of where it is pointing to
	printf("\n %d \n", *arr1Ptr);   // -6
	printf("%d \n", *(arr1Ptr - 3));   // -5


	return 0;
}



