// Code from the worksheet in class
// demonstrates static keyword, global variables, and varible shadowing

# include <stdio.h>

int increment(int x);
int number = 12;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main(void) {
	int i, x = 2;

	for (i = 0; i < 2; i++) {
		increment(x);
	}

	printf("number from main is %i\n", number);
	printf("x from main is %i\n", x);
	number = increment(x);
	printf("number after call to increment is %i\n", number);
	printf("x after call to increment is %i\n", x);
	
}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -



// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
/* function that increments values
	inputs: an integer sent in from main()
	output: the value of 'number' that has been incremented
*/
int increment(int x) {
	static int number = 0;

	number++;
	x += 5;

	printf("number in increment is %i\n", number);
	printf("x in increment is %i\n", x);

	return number;
}
