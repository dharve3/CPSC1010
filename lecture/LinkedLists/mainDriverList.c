/* simplified version of student structure
	to use in a linked-list of students

	functions to: 
		append() - add student to list
		printStudents() - print the student info for all in the list

	this program uses redirection:
	to run this program, use the input file given:
		./a.out < students.txt
*/

#include "studentList.h"


// ----------------------- main function -------------------------
int main(void) {
	// pointer to the list
	student_t * Students = NULL;
	char name[20];

	// while there is a name read in from the file, send it to 
	// the append function and let that function create a node
	// and add it to the end of the list
	while(scanf("%s", name) != EOF) {
		append(name, &Students);
	}


	// printf first one to make sure the list was created
	printf("First student is: \n");
	printf("\t%s %s %d \n\n", Students->firstName, 
								   Students->lastName,
									Students->cuid);
  	 


	// print all the students in the list
	printStudents(Students);

	return 0;
}

