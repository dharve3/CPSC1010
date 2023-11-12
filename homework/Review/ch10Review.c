#include <stdio.h>
/*
// 1-6
int main( ) {
	int integer1, *p1, *p2;
	
	integer1 = 10;
	p1 = &integer1;
	p2 = &p1;
	
	// (*p1)++;
	// integer1++; // same
	// *p1++; // not same - not assigned
	printf("integer1 %d\n", integer1);
	printf("&integer1 %p\n", &integer1);
	printf("p1 %p\n", p1);
	printf("&p1 %p\n", &p1);
	printf("p2 %p\n", p2);
	printf("&p2 %p\n", &p2);

	return 0;
}
*/

/*
// 7
void swap(int, int);

int main(void) {
       // declare two integers
       int a = 5;
       int b = 6;

       // swap the two values so that a becomes 6 and b becomes 5
       swap(a, b);

       printf("a is %d and b is %d\n", a, b);

       return 0;
}

void swap(int first, int second) {
       int temp;

       temp = first;
       first = second;
       second = temp;
}
*/

/*
// 8-10
int main(void) {
	int x[] = { 1, 2, 3, 4 };
	int * p = &x[2];
	int * q = &x[1];
	int * r = q++; // increments q regardless

	// printf("%i \n", *(p+1)); // 4
	// printf("%i \n", *q); // 3??
	// printf("%i \n", *r); // 2
	return 0;
}
*/
