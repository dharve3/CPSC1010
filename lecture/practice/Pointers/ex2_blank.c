#include <stdio.h>

int main(void) {
	// declare an array called arr1 of size 8
	// initialize with these values: 2  1  7  4  -6  9  5  -3


	// declare a pointer called arr1Ptr 
	// initialize it to point to that array declared above


	// print statement to print the value of the last element
	// using array subscript notation
	

	// print statement to print the value of the last element
	// using the pointer
	

	// where is the arr1Ptr pointing to now?  

	// change value of 2nd element to -5 using array subscript notation
	

	// change value of 4th element to 8 using pointer
	

	// where is the arr1Ptr pointing to now? 
	printf("\n %d \n", *arr1Ptr);   // value printed??

	arr1Ptr = arr1Ptr + 4;
	// where is the arr1Ptr pointing to now? 
	// print the value of where it is pointing to
	printf("\n %d \n", *arr1Ptr);   // value printed?
	printf("\n %d \n", *(arr1Ptr - 3));   // value printed?



	return 0;
}



