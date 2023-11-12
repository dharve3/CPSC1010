// Counts chars of string

#include <stdio.h>

int main(void) {
	char string1[] = "Hello";
	int i;

	for (i=0; string1[i] !='\0'; i++)
		;
	printf("Number of characters in %s is %d\n", string1, i);
}
