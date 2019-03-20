//Add refinements to the program outline that follows and write the final C program.
/*
* Compute the sum and average of two numbers.
*/
#include <stdio.h> /* printf, scanf definitions */
int main(void)
{
	double one, two, /* input - numbers to process */
	sum, /* output - sum of one and two */
	average; /* output - average of one and two */
	
	/* Get two numbers. */
	printf ("Enter 1st Number : ");
	scanf("%lf", &one);
	printf ("Enter 2nd Number : ");
	scanf("%lf", &two);
	
	/* Compute sum of numbers. */
	sum = one + two;
	
	/* Compute average of numbers. */
	average = sum/2;
	
	/* Display sum and average. */
	printf ("Sum 2 Number : %lf \nAverage 2 Number : %lf", sum, average);

	return (0);
}
