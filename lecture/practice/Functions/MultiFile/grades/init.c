/* init.c 

	will average together some grades
	and print the result to the user

	split into functions
*/

#include "defs.h"


// initializes any array sent to it; returns nothing
// inputs: integer array and the size of the array
// outputs: none
void initArray(int theArray[], int size) {
	int i;
	for (i = 0; i < size; ++i) {
		printf("Enter a grade: "); // comment out this print statement
											// if redirecting input from a file
		scanf("%i", &theArray[i]);
	} 
}



