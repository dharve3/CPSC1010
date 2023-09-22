#include <stdio.h>

int main(void) {
   // 1. declare the 4 needed variables here: 
	//		array called num that can hold 10 integers, 
	// 	integers maxScore, minScore, i
	int num[10] = {0};
	int maxScore, minScore, i;

   printf("\nEnter numbers between 0 and 100, inclusive:  \n");
   // 2. write the loop to get the values from the user 
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}


   // 3. initialize other two variables here
	maxScore = 0;
	minScore = 100;

	i = 0;
   // 4. complete the condition in the while loop
   while ( i < 10 ) {
      // 5. body of the while loop to keep track of the maximum score 
		//    and the minimum score
 		if (num[i] > maxScore)
			maxScore = num[i];
 		
		if (num[i] < minScore)
			minScore = num[i];
	
		i++;	
   }

   printf("\nMaximum score is %d\n", maxScore);
   printf("Minimum score is %d\n\n", minScore);

	return 0;
}

