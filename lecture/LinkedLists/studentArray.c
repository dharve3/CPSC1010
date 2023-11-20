/* simplified version of student structure
	to use in an array of students

	functions: 
		getStudents() - fill up the array 
		printStudents() - print the student info for all in array
*/


#include "studentArray.h"



/* will fill up the array with the student data
	uses a sentinel value of 0 for age to indicate there are no more
	inputs:  size (the size of the array)
			   theStudents[] (array to hold the student info)
	outputs: none
*/
void getStudents(int size, student_t theStudents[]) {
	int i, age;
	for (i = 0; i < size; i++) {
		scanf("%s", theStudents[i].firstName);
		scanf("%s", theStudents[i].lastName);
		scanf("%d", &theStudents[i].cuid);
	}
}


/* will print the student data
	uses a sentinel value of 0 for age to know when there are no more
	inputs:  size (the size of the array)
			   theStudents[] (array to hold the student info)
	outputs: none
*/
void printStudents(int size, student_t theStudents[]) {
	int i;
	printf("All the students: \n");
	for (i = 0; i < size; i++) {
		printf("\t%s ", theStudents[i].firstName);
		printf("%s ", theStudents[i].lastName);
		printf("%d\n", theStudents[i].cuid);
	}
}



