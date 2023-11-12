#include <stdio.h>

int main(void) {
	int score, passCount;
	
	passCount = 0;

	scanf("%d", &score);
	while(!feof(stdin)) {
		printf("%d\n", score);
		if (score >= 70)
			passCount++;
		scanf("%d", &score);
	}

	printf("\n\nPassing score count is %d\n", passCount);

	return 0;
}
		
