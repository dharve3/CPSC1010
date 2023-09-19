#include <stdio.h>

int main(void) {
	int score, maxScore, minScore;

	scanf("%d", &score);
	maxScore = 0;
	minScore = 100;

	printf("\n");

	while (!feof(stdin)) {
		printf("%d\n", score);
		if (score > maxScore)
			maxScore = score;
		if (score < minScore)
			minScore = score;
		scanf("%d", &score);
	}

	printf("\nMaximum socre is %d\n", maxScore);
	printf("Minimum socre is %d\n\n", minScore);
	
	return 0;
}
