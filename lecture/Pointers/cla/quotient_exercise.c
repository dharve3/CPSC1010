/*
 * This program illustrates the use of command line arguments and atof.
 * It reads two numbers in from the command line and prints out the quotient.
 *
 * We expect 3 command-line arguments, e.g. "./a.out 2 5"
 * where argc is 3 and
 * argv[0] is "a.out"
 * argv[1] is "2"
 * argv[2] is "5"
 *
 * If 3 arguments are not provided, just provide an error message and return.
 *
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]) {
	float quotient = 0.0, numerator, denominator;

	if (argc != 3) {
		printf("usage: %s operand1 operand2  \n\n", argv[0]);
	}
	else {
		// use sscanf to put the first value into numerator
		sscanf(argv[1], "%f", &numerator);

		// use atoi to get put the second value into denomerator
		denominator = atof(argv[2]);

		// determine what the quotient is, i.e. divide the
		//    first number entered by the second number entered
		quotient = numerator / denominator;

		printf("quotient is %.4lf \n\n", quotient);
	}

	return 0;

}


