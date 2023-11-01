#include "defs.h"

int main() {
	int array1[] = { 157, -28, -37, 26, 10 };
	int array2[] = { 12, 45, 1, 10, 5, 3, 22 };
	int min; 

	min = minimum(array1, 5);
	printf("\nminimum value: %d\n\n", min);

	min = minimum(array2, 7);
	printf("\nminimum value: %d\n\n", min);

	return 0;
}



