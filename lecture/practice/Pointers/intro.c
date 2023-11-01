#include <stdio.h>

int main() {
	int count = 5;
	int *countPtr = NULL; // Good practice to init pointers to NULL - avoid segfaults

	countPtr = &count; // Assigns countPtr to the address of count

	printf("\n%d \n", count); // Value of count
	printf("%p \n", &count); // Hexadecimal Memory Address of Count
	
	printf("\n%p \n", countPtr); // Value of countPtr
	printf("%p \n", &countPtr); // Address of countPtr	
	printf("%d \n", *countPtr); // Dereference using * operator


	*countPtr = 10; // Changes value at the mem address of countPtr (count)
	printf("\n%p \n", &countPtr);
	printf("%d \n", *countPtr);

	return 0;
}
