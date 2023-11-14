/*	Dylan Harvey
	11/17/2023
	CPSC-1011-002
	Desc here...

*/

#include "defs.h"

int main(int argc, char * argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <nth_fib_number>\n", argv[0]);
		exit(1);
	}
	int fib_size = atoi(argv[1]);
	if (fib_size <= 0) {
		fprintf(stderr, "n should be greater than 0\n");
		exit(2);
	}

	printf("DEBUG: argc: %d, argv[0]: %s, argv[1]: %s\n", argc, argv[0], argv[1]);
	printf("DEBUG: fib_size: %i\n", fib_size);

	int * fibonacci_numbers = generateFibonacci(fib_size);

	printHistogram(fibonacci_numbers, fib_size);
	
	free(fibonacci_numbers);
	return 0;
}
