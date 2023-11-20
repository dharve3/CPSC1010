/* simplified version of student structure
	to use in a linked-list of students

	functions to: 
		append() - add new student to the list
		printStudents() - print the student info for all in the list

	there are 4 areas where code is needed 
*/

#include "studentList.h"



/* will create a new student node using the first name sent in, and then
 		scanf() calls to get the last name and user id
	the new student node will then be added to the end of the list
	inputs:  the pointer to the list
	outputs: none
*/
void append(char fName[], student_t **theStudents) {
	// 1. create new student node (declare and dynamically allocate space for it)
	student_t * newStudent = (student_t *)malloc(sizeof(student_t));
	
	
	// 2. initialize new student node 
	//    there are 4 fields in the node:
	//		first name, last name, id, and next pointer
	//		first line is given (for the first name, which was sent in
	//			to the first parameter of the function)- complete the other 3
	//		hints:  the last name and cuid will involve scanf()
	//				  the pointer should be initialized to NULL
	strcpy(newStudent->firstName, fName);
	scanf("%s", newStudent->lastName);
	scanf("%d", newStudent->cuid);
	newStudent->next = NULL;


	// add the new node to the end of the list
	// case 1:  if the list is empty:
	if((*theStudents) == NULL) {
		(*theStudents) = newStudent;
	}
	else {  // case 2:  list is not empty
		// use current pointer to traverse the list instead of theStudents
	student_t * current = *theStudents;	


		// find the end of the list 
		while (current->next != NULL) {
			// 3. add the one line of code to get to the end of the list
			//    i.e. advace the current pointer until it cannot go any further
			current = current->next;

		}

		// 4. now we know where the end of the list is 
		//    add the new student to the end by assigning the current->next 
		//    pointer to the new student
		current->next = *newStudent;
		// double check this one^
		
		
	}
}


/* will print the student data
	uses a sentinel value of 0 for age to know when there are no more
	inputs:  size (the size of the array)
			   theStudents[] (array to hold the student info)
	outputs: none
*/
void printStudents(student_t * theStudents) {
	if (theStudents == NULL)
		printf("List is empty.\n\n");
	else {
		printf("\n\n");
		while(theStudents != NULL) {
			printf("\t%s ", theStudents->firstName);
			printf("%s ", theStudents->lastName);
			printf("%d\n", theStudents->cuid); 

			// advance the pointer to the next student
			theStudents = theStudents->next;
		}
	}
	printf("\n\n");
}


