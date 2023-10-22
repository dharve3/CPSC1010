/*	findMin.c
	...
*/

int findMinimum(int theArray[], int size) {
	int minimum;
	minimum = theArray[0];
	for (int i = 1; i < size; i++) {
		if (minimum > theArray[i])
			minimum = theArray[i];
	}
	return minimum;
}


