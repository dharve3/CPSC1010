#include "defs.h"


int minimum(int theArray[], int size) {
	int least = theArray[0];
	for(int i = 1; i < size; i++) {
		if (least > theArray[i])
			least = theArray[i];
	}
	return least;
}


