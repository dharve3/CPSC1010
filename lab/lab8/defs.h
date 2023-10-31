#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ACTIVITIES 5
#define MAX_LINE 20

void initArrays(double levels[], char types[][MAX_LINE]);
double getUserInput();
void printCaloriesNeeded(double basal_metabolic_rate, double levels[],
	char types[][MAX_LINE]);

#endif
