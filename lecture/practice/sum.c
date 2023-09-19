#include <stdio.h>

int main(void) {
	int score, scoreSum;
	
	scoreSum = 0;

	scanf("%d", &score);
	while(!feof(stdin)) {
		printf("%d\n", score);
		scoreSum += score;
		scanf("%d", &score);
	}

	printf("\n\nScore total is %d\n", scoreSum);

	return 0;
}
		
