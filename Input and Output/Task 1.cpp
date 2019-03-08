//Step 1
//problem analysis
//- Two input are required to calculate enplyee's salary.
//- The first input is number of hours worked and another input is hourly rate.
//- The output is the total gross salary.
//- Double type variables are required to calculate the wages of the employees.
//
//problem input
//hours_worked /*no of hours worked */
//hourly_rate /*per hour rate */
//
//problem output
//gross_salary /*product of hours and hourly rate */
//
//relevant formula
//gross_salary = hours_worked * hourly_rate

#include <stdio.h>

int main(){
	int hours_worked;
	float hourly_rate, gross_salary;
	
	printf("Enter Hours Worked : ");
	scanf ("%d", &hours_worked);
	printf("Enter Hourly Rate : RM ");
	scanf ("%f", &hourly_rate);
	
	gross_salary = hours_worked * hourly_rate;
	
	printf("Gross Salary : RM %.2f", gross_salary);
	
	return 0;
}
