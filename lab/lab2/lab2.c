/* Lab2.c
	Dylan Harvey
	9/12/23
	CPSC-1011-002
	Prints and example of precendce and integer truncation, then takes radius of a circle and outputs volume
*/


#include <stdio.h>
#include <math.h>

int main (void) {
	/* Variable declarations */

	// variables for showing precedence and integer truncation
	// [1] Missing ',' before 'y'
	int x = 3, y = 8, z = -10, result;

	// variables needed for volume of a sphere
	// const float PI = 3.141592;  // defines a constant: will not allow
										// its value to be changed
	// [2] ':' instead of ';'
	float volume = 0;
	int radius = 0;

	/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
	/* First part:  Show precedence and integer trucation */
	// [3] Missing ')'
	result = x + ( (5 * y) / (3 * x) );
	printf("\nresult of x + ( (5 * y) / (3 * x) ) is %d", result);
	// [4] Missing ')'
	result = x + (5 * (y / 3) * x);
	// [5] Missing '"' in printf
	printf("\nresult of x + (5 * (y / 3)) * x is %d\n", result);

	// Reusing variables for more precedence and truncation examples
	x = 4;
	// [6] Missing ';'
	y = 3;
	result = y + z / x;
	// [7,8] Missing '"' and ')'
	printf("\nresult of y + z / x is %d, NOT %.2f  \n", result, -1.75);


	/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
	/* Second part:  volume of a sphere */
	// Get user input
	// [9,10] Missing '(' and ';'
	printf("Enter radius: ");
	// [11] Missing '""
	scanf("%d", &radius);     			

	// volume of a sphere = 4/3 * PI * r * r * r
	// [12] 'r' Undeclared
	// [16] Added use of pow()
	radius = pow(radius, 3);
	// [15] Typecasted x and y to float to correct math
	volume = (float) x / (float) y * M_PI * radius;

	// Print sphere radius and volume
	// [13] Missing 'x' and 'y' declaration in printf for %d
	printf("\nSphere volume = (%d / %d * PI * radius * radius * radius) = ", x, y);
	// [14] Missing '"'
	printf("%.2f\n", volume);		

	return 0;
}



