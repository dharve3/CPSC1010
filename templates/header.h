#ifndef STUDENTARRAY_H
#define STUDENTARRAY_H

#include <stdio.h>
#include <stdlib.h>

// ------------------ structure definitions ----------------------

typedef struct {
	char firstName[15];
	char lastName[20];
	int cuid;
} student_t;


// ------------------------ prototypes ---------------------------
void getStudents(int size, student_t theStudents[]);
void printStudents(int size, student_t theStudents[]);


#endif

