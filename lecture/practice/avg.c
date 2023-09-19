#include <stdio.h>

int main(void) {
	int score, numScores, scoreSum, avg;
	
	scoreSum = 0;
	numScores = 1;

	fscanf(stdin, "%d", &score);
	while(numScores <= 10) {
		printf("%d\n", score);
		scoreSum += score;
		fscanf(stdin, "%d", &score);
		numScores++;
	}

	avg = scoreSum / 10;
	printf("\n\nAvg is %d\n", avg);

	return 0;
}
		
