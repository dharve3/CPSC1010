#include <stdio.h>

int main() {
	int array1[] = { 157, -28, -37, 26, 10 };
	int array2[] = { 12, 45, 1, 10, 5, 3, 22 };
	int min; 

	min = array1[0];
	for (int i = 1; i < 5; i++) {
		if (min > array1[i])
			min = array1[i];
	}

	printf("\nminimum value: %d\n\n", min);

	min = array2[0];
	for (int i = 1; i < 7; i++) {
		if (min > array2[i])
			min = array2[i];
	}


	printf("\nminimum value: %d\n\n", min);


	return 0;
}
