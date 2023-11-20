/* mainDriver.c

	simplified version of student structure
	to use in an array of students

	this program uses redirection:
	to run this program, use the input file given:
		./a.out < students.txt

*/


#include "studentArray.h"


int main(void) {
	student_t Students[10];        

	// just FYI
	printf("FYI:\n");
	printf("\tsize of one student: %d\n", (int)sizeof(student_t));
	printf("\tsize of 10 students: %d\n\n", (int)sizeof(Students));

	/* ----------------------------------------------------------------------- */
	// using array (memory allocated on stack)
	getStudents(10, Students);

	// printf first one
	printf("First student is: \n");
	printf("\t%s %s %d \n\n", Students[0].firstName, 
								     Students[0].lastName,
									  Students[0].cuid);

	// print all the students in the array
	printStudents(10, Students);


	return 0;
}


