/*	Dylan Harvey
	9/12/2023
	CPSC-1010-001
	Takes an input for 10 seconds of heart pulses,
	and converts to a resting heartrate in BPM
*/


#include <stdio.h>

int main() {
	int pulse, restHeartRate, goAgain = 1;

	while (goAgain == 1) {
		printf("\n\nTake your resting pulse for 10 seconds.\n");
		printf("Enter your pulse rate:  ");
		scanf("%d", &pulse);

		restHeartRate = pulse * 6;

		printf("\n\nYour resting heart rate is %d.\n", restHeartRate);

		printf("\n\n");

		printf("\nTry again? \n1 for yes, 0 for no: ");
		scanf("%d", &goAgain);

		while (!(goAgain == 0 || goAgain == 1)) {
			printf("\nINVALID INPUT\n1 for yes, 0 for no: ");
			scanf("%d", &goAgain);
		}
	}

	return 0;
}
