#include <stdio.h>

int main(void){
	float gpa;

	printf("Input the Grade Point Average : ");
	scanf("%lf", &gpa);
	
	if (gpa <= 0.99)
		printf("Failed semester—registration suspended");
	else if (gpa <= 1.99)
		printf("On probation for next semester");
	else if (gpa <= 2.99)
		printf("(no message)");
	else if (gpa <= 3.49)
		printf("Dean’s list for semester");
	else if (gpa <= 4.00)
		printf("Highest honors for semester");
	else
		printf("No Grade Point Average Found");
	
	return 0;
}
