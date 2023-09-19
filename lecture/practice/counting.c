#include <stdio.h>

int main(void) {
	int score, scoreCount;
	
	scoreCount = 0;
	printf("Enter first score or ctrl-d to end: ");
	scanf("%d", &score);

	while(!feof(stdin)) {
		scoreCount++;
		printf("Enter next score or ctrl-d to end: ");
		scanf("%d", &score);
	}

	printf("\n\nScore count is %d\n", scoreCount);

	return 0;
}
		
