/*	lab4.c
	Dylan Harvey
	09/26/2023
	CPSC-1011-002
	Decrypts a given array advice[].
*/

#include <stdio.h>

int main() {
	int i, len;
	int advice[] = { 77, 96, 104, 96, 104, 93, 96, 109, 32, 111, 106, 53, 32, 
		78, 111, 92, 109, 111, 32, 110, 103, 106, 114, 39, 32, 80, 110, 96, 
		32, 107, 109, 106, 107, 96, 109, 32, 111, 96, 94, 99, 105, 100, 108, 112, 
		96, 39, 32, 65, 106, 94, 112, 110, 32, 106, 105, 32, 94, 106, 104, 107, 
		106, 112, 105, 95, 32, 96, 115, 96, 109, 94, 100, 110, 96, 110, 39, 32, 
		80, 110, 96, 32, 97, 109, 96, 96, 32, 114, 96, 100, 98, 99, 111, 110, 
		39, 32, 68, 105, 94, 106, 109, 107, 106, 109, 92, 111, 96, 32, 107, 109, 
		106, 98, 109, 96, 110, 110, 100, 113, 96, 32, 106, 113, 96, 109, 103, 
		106, 92, 95, 39, 32, 60, 103, 103, 106, 114, 32, 97, 106, 109, 32, 107, 
		109, 106, 107, 96, 109, 32, 109, 96, 110, 111, 32, 92, 105, 95, 32, 109, 
		96, 94, 106, 113, 96, 109, 116, 39, 32, 65, 112, 96, 103, 32, 116, 106, 
		112, 109, 32, 93, 106, 95, 116, 32, 107, 109, 106, 107, 96, 109, 103, 
		116, 39, 32, 92, 105, 95, 32, 71, 100, 110, 111, 96, 105, 32, 111, 106, 
		32, 116, 106, 112, 109, 32, 93, 106, 95, 116 };

	// using sizeof, find size of array (length of string) for use when 
	// 	declaring new array that will hold the un-encrypted values
	len = sizeof(advice) / sizeof(advice[0]);
	// Divide size of array in bytes by value of one entry to get # of entries
		
	// print encrypted message
	printf("\n\n");	
	
	for (i=0; i < len; i++)
		printf("%c", advice[i]);


	// create new int array with un-encrypted values 	
	int decrypted[len];
	for (i=0; i < len; i++) {
		if (advice[i] != 32)
			decrypted[i] = advice[i] + 5;
		else
			decrypted[i] = advice[i];
	}	


	// print un-encrypted message from second array
	printf("\n\n");

	for (i=0; i < len; i++)
		printf("%c", decrypted[i]);


	// print un-encrypted message reversing the case
	printf("\n\n");

	for (i=0; i < len; i++) {
		if (decrypted[i] >= 65 && decrypted[i] <= 90) 
			printf("%c", decrypted[i] + 32);
		else if (decrypted[i] >= 97 && decrypted[i] <= 122)
			printf("%c", decrypted[i] - 32);
		else
			printf("%c", decrypted[i]);
	}

	printf("\n\n");

	return 0;
}

