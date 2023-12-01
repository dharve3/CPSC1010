// Recursion worksheet in class
#include <stdio.h>

int main(void) {
	// Update values here!
	f(3579);
}

// Example 1
// Input: f(5)
/*void f(int n)
{
	printf("%d\n", n);
	if (n > 1) {
		f(n - 1);
	}
}*/
// Oputput: 5 4 3 2 1

// Example 2
// Input: f(5)
/*void f (int n)
{
	if (n > 1) {
		f(n - 1);
	}
	printf("%d\n", n);
}*/
// Output: 1 2 3 4 5

// Example 3
// Input: f(3579)
void f(int number)
{
	if (number < 10) {
		printf("%d\n", number);
	}
	else {
		f(number / 10);
		printf("%d\n", number % 10);
	}
}
// Output: 3 5 7 9
