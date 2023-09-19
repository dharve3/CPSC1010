#include <stdio.h>

int main(void) {
	int score, numScores, scoreSum, avg;
	
	scoreSum = 0;
	numScores = 1;

	scanf("%d", &score);
	while(!feof(stdin)) {
		printf("%d\n", score);
		scoreSum += score;
		scanf("%d", &score);
	}

	avg = scoreSum / 10;

	printf("\n\nAvg is %d\n", avg);

	return 0;
}
		
