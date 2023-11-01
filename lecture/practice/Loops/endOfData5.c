#include <stdio.h>

int main(void) {
	int num1, num2, sum; 

	printf("\n");
	scanf("%d", &num1);
	while (!feof(stdin)) {
		scanf("%d", &num2);
		sum = num1 + num2;
		printf("sum of %d + %d is %d\n", num1, num2, sum);
		scanf("%d", &num1);
	}

	printf("\n");

	return 0;
}
