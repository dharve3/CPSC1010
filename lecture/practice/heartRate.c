// heart rate code - code for students in:
// ~/101/classExamples/Chp4
// add a loop


#include <stdio.h>

int main() {
	int pulse, restHeartRate, goAgain = 1;


	printf("\n\nTake your resting pulse for 10 seconds.\n");
	printf("Enter your pulse rate:  ");
	scanf("%d", &pulse);

	restHeartRate = pulse * 6;

	printf("\n\nYour resting heart rate is %d.\n", restHeartRate);

	printf("\n\n");

	return 0;
}
