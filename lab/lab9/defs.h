#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define global vars/constants
typedef struct {
	char name[20];
	char muscles[40];
	int weight;
	int time;
	int sets;
	int reps;
} exercise;

// Function prototypes
void initArray(int arraySize, exercise workout[], FILE *inFile);
void printArray(int arraySize, exercise workout[]);
void getWorkout(int arraySize, exercise workout[]);

#endif
