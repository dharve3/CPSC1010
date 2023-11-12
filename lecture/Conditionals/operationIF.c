#include <stdio.h>

int main() {
	char operation;
	double operand1, operand2;

	printf("Enter your expression in the form:  ");
	printf("operand1 operation operand2\n");
	printf("such as:  12.5 + 4.3  or  6.0 * 3.2  ");
	printf("\n\n\t");
	scanf("%lf %c %lf", &operand1, &operation, &operand2);
	printf("\n");

	if (operation == '+')
   	printf("%.1lf + %.1lf = %.1lf", operand1, operand2, operand1 + operand2);
	else if (operation == '-')
   	printf("%.1lf - %.1lf = %.1lf", operand1, operand2, operand1 - operand2);
	else if (operation == '*')
   	printf("%.1lf * %.1lf = %.1lf", operand1, operand2, operand1 * operand2);
	else if (operation == '/')
   	printf("%.1lf / %.1lf = %.1lf", operand1, operand2, operand1 / operand2);
	else
   	printf("Invalid operation.\n");

	printf("\n\n");
	return 0;
}

