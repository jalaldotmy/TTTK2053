/*
* Performs three square root computations
*/

#include <stdio.h> /* definitions of printf, scanf */
#include <math.h> /* definition of sqrt */

int main(void)
{
	double first, second, /* input - two data values */
	first_sqrt, /* output - square root of first */
	second_sqrt, /* output - square root of second */
	sum_sqrt; /* output - square root of sum */
	
	/* Get first number and display its square root. */
	printf("Enter the first number> ");
	scanf("%lf", &first);
	first_sqrt = sqrt(first);
	printf("The square root of the first number is %.2f\n", first_sqrt);
	/* Get second number and display its square root. */
	printf("Enter the second number> ");
	scanf("%lf", &second);
	second_sqrt = sqrt(second);
	printf("The square root of the second number is %.2f\n", second_sqrt);
	
	/* Display the square root of the sum of the two numbers. */
	sum_sqrt = sqrt(first + second);
	printf("The square root of the sum of the two numbers is %.2f\n",
	sum_sqrt);
	
	return (0);
}

/*
Enter the first number> 9.0
The square root of the first number is 3.00
Enter the second number> 16.0
The square root of the second number is 4.00
The square root of the sum of the two numbers is 5.00
*/
