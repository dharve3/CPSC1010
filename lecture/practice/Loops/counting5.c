#include <stdio.h>

int main(void) {
	int score, scoreCount;
	
	scoreCount = 0;

	for ( ; scanf("%d", &score) == 1; scoreCount++) 
		;

	printf("\n\nScore count is %d\n", scoreCount);

	return 0;
}
		
