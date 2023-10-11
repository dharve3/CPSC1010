/*	Dylan Harvey
	10/03/2023
	CPSC-1011-002
	Description Here
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUM_ACTIVITIES = 5;
const int MAX_LINE = 20;

int main(void) {
	// read input from file
	int i, j, temp;
	int line_len;
	char line_in[MAX_LINE];
	char activity_type[NUM_ACTIVITIES][MAX_LINE];
	float activity_level[NUM_ACTIVITIES];

	for (i = 0; i/2 < NUM_ACTIVITIES; i++) {
		printf("DEBUG: i = %d, i/2 = %d, i%2 = %d\n", i, i/2, i%2);
		fgets(line_in, MAX_LINE, stdin);
		line_len = strlen(line_in);
		printf("DEBUG: Line In: %s", line_in);
		if (i % 2 == 0) {
			printf("DEBUG: Assigning 2D\n");
			for (j = 0; j < line_len; j++) {
				activity_type[i/2][j] = line_in[j];
				printf("Char: '%c' ", line_in[j]);
			}
			printf("DEBUG: String: %s", activity_type[i/2]);
		}
		else if (i % 2 == 1) {
			printf("DEBUG: Assigning 1D\n");
			// This scanf doesn't get any value for some reason
			temp = scanf("%f\n", &activity_level[i/2]);
			printf("DEBUG: Scanf return = %d\n", temp);
			printf("DEBUG: Activity Level: %f\n", activity_level[i/2]);
		}
	}
	
}
