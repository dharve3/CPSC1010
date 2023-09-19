#include <stdio.h>

int main(void) {
	int score, passCount, failCount;
	
	passCount = 0;
	failCount = 0;

	scanf("%d", &score);
	while(!feof(stdin)) {
		printf("%d\n", score);
		if (score >= 70)
			passCount++;
		else
			failCount++;
		scanf("%d", &score);
	}

	printf("\n\nPassing score count is %d\n", passCount);
	printf("Failing score count is %d\n", failCount);

	return 0;
}
		
