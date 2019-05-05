#include <stdio.h>

int main(){
	float beginning, ending, traveled, reimbursement;
	
	
	printf("MILEAGE REIMBURSEMENT CALCULATOR");
	printf("\n");
	printf("Enter beginning odometer reading => ");
	scanf("%f", &beginning);
	printf("Enter ending odometer reading => ");
	scanf("%f", &ending);
	
	traveled = ending - beginning;
	reimbursement = traveled * 0.35;
	
	printf("You traveled %.1f miles. At $0.35 per mile,", traveled);
	printf("\n");
	printf("your reimbursement is %.2f.", reimbursement);
	
	return 0;
}
