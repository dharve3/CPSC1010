#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define global vars/constants
#define NUM_EXERCISES 37
#define MAX_LINE 105

// Function Prototypes
void initArrays(FILE *inFile, char exercises[NUM_EXERCISES][MAX_LINE], double mets[]);
int getChoice(char exercises[NUM_EXERCISES][MAX_LINE]);
// fix this var shadowing later
void printExercises(char exercises[NUM_EXERCISES][MAX_LINE]);
void printResults(int choice, double weight, double mets[]);
// dont forget!!!

#endif
