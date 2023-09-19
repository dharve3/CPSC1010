#include <stdio.h>

int main(void) {
	int num1, num2, sum; 

	printf("\n");
	while (scanf("%d", &num1) != EOF) {
		scanf("%d", &num2);
		sum = num1 + num2;
		printf("sum of %d + %d is %d\n", num1, num2, sum);
	}

	printf("\n");

	return 0;
}
