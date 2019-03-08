#include <stdio.h>

int main(void){
	float grade;

	printf("Input the Grade Point Average : ");
	scanf("%f", &grade);
	
	if (grade < 0.0)
		printf("Failed semester—registration suspended");
	else if (grade < 1.00)
		printf("On probation for next semester");
	else if (grade < 2.99)
		printf("(no message)");
	else if (grade < 3.49)
		printf("Dean’s list for semester");
	else if (grade < 4.00)
		printf("Highest honors for semester");
	else
		printf("No Grade Point Average Found");
	
	getchar(); getchar(); 
	return (0);
}
