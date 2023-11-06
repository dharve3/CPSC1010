/* exchange sort with
	sorting in a function and
	printint of the array in a function

	sends a pointer to the array to the sort function
	the sort function's first argument is an int pointer

	uses malloc
*/

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	// char word[8];
	// word = "Hello";

	char *aPtr = NULL;

	/* aPtr = (char *)malloc(25 * sizeof(char));
	if (aPtr == NULL) {
		printf("error with malloc\n");
		exit(1);
	} */


	// aPtr = "Cathy Kittelstad";
	// printf("\n%s\n", aPtr);

	// or, can do it this way:
	
	aPtr[0] = 'J';      
	aPtr[1] = 'a';      
	aPtr[2] = 's';
	aPtr[3] = 'o';      
	aPtr[4] = 'n';     
	printf("\n%s\n", aPtr);


	free(aPtr);
	return 0;
}


