/*	
 *	This program illustrates the use of command-line arguments and scanf()
 *	...
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	int index = 1;
	int number;
	int sum = 0;

	if (argc < 2) {
		printf("usage: ./a.out <integers>\n");
		exit (1);
	}

	printf("argc is %d\n\n", argc);

	while (index < argc) {
		scanf(argv[index], "%d", &number);
		sum += number;
		index++;
	}

	printf("The total sum is %d\n", sum);
	return 0;
}
