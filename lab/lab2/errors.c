/* Lab 2 Summary:
   This program contains errors and warnings that need to be fixed.  
	Once fixed, this program demonstrates several things:

   The first part of this  program demonstrates operator precedence, 
	integer truncation, and will allow you to change the output of a
	floating point value from 6 decimal places down to 2.

	The second part of this program asks the user to enter one number: 
	an integer for radius of a sphere.  It then calculates the volume of 
	the sphere and shows the results to the user.

	The scanf() function is used for user input and also comes from stdio.h
	like printf().

	A few more things to note that are explained below:
	1. The const keyword is used with the variable declaration for PI. This 
	   prevents that variable's value from being changed.
	2. The user will also change the program so that it uses the pre-defined 
	   value for PI (M_PI) from the math.h library 
	3. as well as using the pow() function for calculating radius cubed.
*/


/* Lab 2 - Instructions:
   
	1. Copy this file into another file called lab2.c.
	
	2. Open another ssh/putty shell or terminal window so that you have two
	   windows open.  In one window, open up lab2.c in an editor. In 
		the other window compile lab2.c.  Don't forget to use the -Wall option 
		when compiling to see all the warnings that may be present:   
				gcc -Wall lab2.c
		
		When you first compile it, there should be 11 errors and 6 warnings.

		In the window with lab2.c open, start fixing the errors according 
		to the compile errors shown in the other window, leaving a comment 
		before each line that contained errors.  Number each comment/error
		and explain what the error was. 

		For example, if the line of code containing the first error looked 
		like this: 
				int sum, num1 num2;
	
		do the following:
				// 1.  missing a comma
				int sum, num1, num2;

	3. Remember, you should always start at the top of the list of errors 
		shown after compiling and fix one or two at a time.  After each fix, 
		save the file, and in the other window, re-compile again. You should 
		see that list of errors get smaller each time you make some fixes and 
		re-compile.  

		Fix each error one at a time.  By the time you finish with this part,
		you should have ended up with 13 fixed errors and 1 warning that 
		needs to be fixed as well.  

	4. Once you have all the errors fixed and comments preceding each
	   line that contained an error, in the window where you did your
		compiling, open up errors.c.  Use this file to view these 
		instructions in the big comment at the top. In lab2.c, you will 
		get rid of this big comment at the top, so using errors.c (the 
		original file) you will still have access to them.
		
		You want to have only your normal, proper header as required at
		the top of your program in lab2.c - fix that now.

	5. After fixing all the compilation errors and fixing the header comment,
		run the program.  The first two lines of output should be:
				result of x + ( (5 * y) / (3 * x) ) is 7
				result of x + (5 * (y / 3)) * x) is 33

		Do those on a calculator and make sure those make sense.  See how 
		both lines contain the same numbers & variables in the same order, but 
		the parentheses are different. That makes a difference, this could
		easily be a common type of error for a programmer who isn't thinking
		through the logic of the mathematical operations in a program.

	6. The third line of output should be:
				result of y + z / x is 1, NOT -1.750000

		Change the output of -1.750000 so that it prints to 2 decimal places:
				result of y + z / x is 1, NOT -1.75

	7. So far, you've see with the first part of the program operator 
		precedence, integer truncation, and how to limit the decimal places
		of a floating point value printed to the screen.

		The next part of the program shows how to get a value entered by the 
		user and use that value to compute the volume of a sphere. The scanf() 
		function is used to get values from the user (keyboard).

		Notice that the variable PI that is declared in the program is declared
		as a const float - making it a constant prevents the value from being
		changed later in the program.

		Google the volume of a sphere and test with different values for radius:
			radius 2 - volume is 33.51
			radius 3 - volume is 113.10
			radius 5 - volume is 523.60

		Take a look at your program and test it with those values for radius.
		Do the volumes match up?  Why do you get the following values??
			radius 2 - volume is 25.13
			radius 3 - volume is 84.82
			radius 5 - volume is 392.70

		There is a semantic error in the code - see if you can figure it out 
		and fix it so that you get values for volume that match the first set 
		above.  When you fix this one, also add the comment before it and 
		number it.  

	8. After fixing the errors and ensuring your program works, do the
		following additional steps:
		a. Add    #include <math.h>   to the top of your file where your
			other #include statement is.
		b. Comment out the declaration of PI.
		c. Change all other instances of the variable PI to M_PI. This allows 
			the use of the predefined constant called M_PI from the math 
			library on our system.  
		d. Change the part of the volume calculation where you have 
			radius * radius * radius so that it uses the pow() function.  You
			may need to go to cplusplus.com for more information on how to use
			this function.

   9. Recompile and retest your code, ensuring it still works.  NOTE:  When
  		using the math library, to compile you need to add -lm to the compile 
		command:
				gcc -Wall lab2.c -lm

  10. After you have done all these steps, then you can submit your
	   fixed lab2.c to Gradescope.  Your TA can help you if you have 
		trouble doing that.  
*/



#include <stdio.h>

int main (void) {
	/* Variable declarations */

	// variables for showing precedence and integer truncation
	int x = 3 y = 8, z = -10, result;

	// variables needed for volume of a sphere
	const float PI = 3.141592;  // defines a constant: will not allow
										 // its value to be changed
	float volume = 0:    			
	int radius = 0;

	/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
	/* First part:  Show precedence and integer trucation */
	result = x + ( (5 * y) / (3 * x) ;
	printf("\nresult of x + ( (5 * y) / (3 * x) ) is %d", result);
	result = x + (5 * (y / 3) * x;
	printf(\nresult of x + (5 * (y / 3)) * x is %d\n", result);

	// Reusing variables for more precedence and truncation examples
	x = 4;
	y = 3
	result = y + z / x;
	printf("\nresult of y + z / x is %d, NOT %f  \n', result, -1.75;


	/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
	/* Second part:  volume of a sphere */
	// Get user input
	printf"Enter radius: ")  			
	scanf("%d, &radius);     			

	// volume of a sphere = 4/3 * PI * r * r * r
	volume = x / y * PI * r * r * r ;

	// Print sphere radius and volume
	printf("\nSphere volume = (%d / %d * PI * radius * radius * radius) = ");
	printf("%.2f\n', volume);		

	return 0;
}



