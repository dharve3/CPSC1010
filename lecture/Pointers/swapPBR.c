/* trying to swap to values by sending them to a swap function */

#include <stdio.h>

void swap(int *, int *);

int main(void) {
       // declare two integers
       int a = 5;
       int b = 6;
		 // int * aPtr = &a;
		 // int * bPtr = &b;

		 // swap the two values so that a becomes 6 and b becomes 5
       swap(&a, &b);

       // swap(aPtr, bPtr);

       printf("a is %d and b is %d\n", a, b);

       return 0;
}


void swap(int * first, int * second) {
       int temp;

       temp = *first;
       *first = *second;
       *second = temp;
       
       printf("first is %d and second is %d\n", *first, *second);
}
