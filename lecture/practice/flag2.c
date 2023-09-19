#include <stdio.h>

int main(void) {
	int score, target, found = 0;

	scanf("%d", &target);
	printf("\nTarget score is %d \n\n", target);
	scanf("%d", &score);
	while (!feof(stdin) && !found) {
		printf("%d\n", score);
		if (score == target)
			found = 1;
		scanf("%d", &score);
	}

	if (found)
		printf("\nTarget %d was found \n\n", target);
	else
		printf("\nTarget %d was not found \n\n", target);

	return 0;
}

