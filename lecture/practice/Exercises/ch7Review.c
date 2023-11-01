/*	Chapter 7 Code
	For review purposes

*/

#include <stdio.h>

/*
void f1(float x) {
	int n = 6;
	printf("%f \n", x + n);  // 1. What value?
}

int f2(void) {
	float n = 10;
	printf("%.2f \n", n);  // 2. What value?
}

int main(void) {
	int n = 5;
	f1(3);
	f2();
	return 0;
}
*/
// 9.000000
// 10.00

/*
void multiplyBy2(float y) {
	y *= 2;
}

int main(void) {
	float y = 7;
	multiplyBy2(y);
	printf("%.2f \n", y);  // What value?

	return 0;
}
*/
// 7.00

/*
void multiplyBy2(float array[], int n) {
	int i;
   for( i = 0; i < n; ++i )
      array[i] *= 2;
}

int main(void) {
   float floatVals[4] = { 1.2, -3.3, 6.1, 8.4 };
   int i;
   multiplyBy2 (floatVals, 4);

   for( i = 0; i < 4; ++i )
      printf("%.2f ", floatVals[i]);  // What values?

		printf("\n");

   return 0;
}
*/
// 2.40 -6.60 12.20 16.80

/*
int x = 2;              

void f1(int x) {
   x++;
	// increments local x but is destroyed upon function completion
}

void f2(void) {
   x++;
	// increments global x
}

int main(void) {        
   int x = 7;
   f1(x);
   f2();
   printf("%i \n",x);  // What value?
}
*/
// 7

/*
int x = 2;

void f1(int x) {
   x++;
	// increments local x then is destroyed
   f2();
}

void f2(void) {
   x++;
	// increments global x
	// prints global x
   printf("x=%i \n",x);  // What prints?
}

int main(void) {
   int x = 7;
   f1(x);
   printf("x=%i \n",x);
}
*/
// x=3

/*
// What prints by whole program?
void auto_static (void) {
   int autoVar = 1;
   static int staticVar = 1;
   printf("%i, %i\n", autoVar, staticVar);
   ++autoVar;
   ++staticVar;
}

int main (void) {
   int i;
   for( i = 0; i < 5; ++i )
      auto_static();

   return 0;
}
*/
// 1, 1
// 1, 2
// 1, 3
// 1, 4
// 1, 5

/*
int square(int x);

int main(void) {
    int value = 2, x;
    int valueSquared = square(value);
    square(4);
    printf("%d \n", x);  // What prints?

    return 0;
}

int square(int x) {
    return x * x;
}
*/
// Undefined value

/*
int square(int x);

int main(void) {
    int value = 2;
    int valueSquared = square(value);
    square(4);
    printf("%d \n", x);  // What prints?

    return 0;
}

int square(int x) {
    return x * x;
}
*/
// Wont compile (error on print statement, x is not declared)

/*
int square(int x);

int main(void) {
    int value = 2;
    int valueSquared = square(value);
    printf("%d\n", square(4));  // What prints?

    return 0;
}

int square(int x) {
    return x * x;
}
*/
// 16
