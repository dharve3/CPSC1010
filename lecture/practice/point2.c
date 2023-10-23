// point structure example without typedef

#include <stdio.h>

struct point {
	double x, y;
};


int main() {
	struct point p1;

	printf("Enter an x and y value for a point: ");
	scanf("%lf %lf", &p1.x, &p1.y);

	printf("\n\np1.x is  %.2lf  and  p1.y is  %.2lf  \n\n", p1.x, p1.y);

	return 0;
}
