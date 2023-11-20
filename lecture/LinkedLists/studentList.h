#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// ------------------ structure definition ----------------------

// modify struct by adding a next pointer
typedef struct student {
	char firstName[15];
	char lastName[20];
	int cuid;
	struct student * next;
} student_t;


// ----------------------- prototypes ---------------------------
void append(char fName[], student_t **theStudents);
void printStudents(student_t * theStudents);


#endif
