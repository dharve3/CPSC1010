#include <stdio.h>

int main(void) {
	// declare an integer variable called count, initialized to 5
	int count = 5;
	printf("count is %d \n", count);
	printf("address of count is %p \n", &count);

	// declare an integer pointer called countPtr, initialized
	// to point to the memory location we are calling "count"
	int *countPtr = &count;

	// print statement to print the value of count
	printf("\n%d \n", count);
	// print statement to print the value of where countPtr is pointing to
	printf("%d \n", *countPtr);


	// reassign new value of 10 to "count"
	// 2 ways to do that:
	// 	1: count = 10;
	//		2: *countPtr = 10;
	*countPtr = 10;
	printf("\n%d \n", count);

	return 0;
}
