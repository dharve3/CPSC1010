#include <stdio.h>

int main(void) {
	int score, scoreCount;
	
	scoreCount = 0;

	printf("Enter first score or ctrl-d to end: ");
	while(scanf("%d", &score) == 1) {
		scoreCount++;
		printf("Enter next score or ctrl-d to end: ");
	}

	printf("\n\nScore count is %d\n", scoreCount);

	return 0;
}
		
