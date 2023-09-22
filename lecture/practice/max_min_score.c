/* max_min_score.c */

#include <stdio.h>

int main(void) {
   // 1. declare the 3 needed variables here: num, maxScore, minScore
	int num, maxScore, minScore, goAgain;

   printf("\nEnter numbers between 0 and 100, inclusive:  \n");
   printf("Hit ctrl-d when done.\n\n");
   // 2. write the scanf needed to get the first value entered by the user
	scanf("%d", &num);

   // 3. initialize other two variables here
	maxScore = 0;
	minScore = 100;
	goAgain = 1;

   // 4. complete the condition in the while loop
   while (goAgain == 1) {    
      // 5. body of the while loop to keep track of the maximum score 
		//    and the minimum score	
		if (num > maxScore)
			maxScore = num;

		if (num < minScore)
			minScore = num;

		// 6. another scanf to get the next value
		// hint: endOfData.c may give a hint on how to do this
		goAgain = scanf("%d", &num);
   }

   printf("\nMaximum score is %d\n", maxScore);
   printf("Minimum score is %d\n\n", minScore);

	return 0;
}

