/*	init.c
	initalizes arrays from stdin (redirection of file expected)
	parameters: levels[], types[][] (The activity levels and types)
	return: none
*/

#include "defs.h"

void initArrays(double levels[], char types[][MAX_LINE]) {
	int i, j;
	char line_in[MAX_LINE];
	for (i = 0; i/2 < NUM_ACTIVITIES; i++) {
		if (i % 2 == 0) {
			fgets(line_in, MAX_LINE, stdin);
			for (j = 0; j < MAX_LINE; j++) {
				types[i/2][j] = line_in[j];
			}
		}
		else if (i % 2 == 1) {
			scanf("%lf\n", &levels[i/2]);
		}
	}
}
