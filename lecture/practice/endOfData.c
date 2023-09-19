#include <stdio.h>

int main(void) {
	int num1, num2, sum, inputCount;

	printf("\n");
	inputCount = scanf("%d", &num1);
	while (inputCount == 1) {
		scanf("%d", &num2);
		sum = num1 + num2;
		printf("sum of %d + %d is %d\n", num1, num2, sum);
		inputCount = scanf("%d", &num1);
	}

	printf("\n");

	return 0;
}
