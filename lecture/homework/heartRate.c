/*	Dylan Harvey
	9/12/2023
	CPSC-1010-001
	Takes an input for 10 seconds of heart pulses,
	and converts to a resting heartrate in BPM.
	Provides feedback as a print statement.
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
		if (restHeartRate < 49) {
			printf("You have bradycardia and should probably see a doctor.\n\n");
		}
		else if (restHeartRate >= 49 && restHeartRate <= 58) {
			printf("You must be an athlete!\n\n");
		}
		else if (restHeartRate >=59 && restHeartRate <= 74) {
			printf("Your heart is doing well!\n\n");
		}
		else if (restHeartRate >= 75 && restHeartRate <=100) {
			printf("Keep up your exercise program!\n\n");
		}
		else {
			printf("You have tachycardia and should probably see a doctor.\n\n");
		}

		printf("\nTry again? \n1 for yes, 0 for no: ");
		scanf("%d", &goAgain);

		while (!(goAgain == 0 || goAgain == 1)) {
			printf("\nINVALID INPUT\n1 for yes, 0 for no: ");
			scanf("%d", &goAgain);
		}
	}

	return 0;
}
