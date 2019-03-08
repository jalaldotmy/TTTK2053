#include <stdio.h>

int main(void){
	printf("1. Write an if statement that might be used to compute and display the average of a set of n numbers whose sum is stored in variable total . This average should be found only if n is greater than 0; otherwise, an error message should be displayed.\n");
	int num1, num2, num3, num4, num5;
	float total;
	
	printf("Enter a 1st Number : ");
	scanf("%d", &num1);
	printf("Enter a 2nd Number : ");
	scanf("%d", &num2);
	printf("Enter a 3rd Number : ");
	scanf("%d", &num3);
	printf("Enter a 4th Number : ");
	scanf("%d", &num4);
	printf("Enter a 5th Number : ");
	scanf("%d", &num5);
	
	total = num1 + num2 + num3 + num4 + num5;
	
	
	if(total>0){
		total = total/5;
		printf("Avarage 5 Number is : %f", total);
	}
	else 
		printf("Avarage 5 Number below than 0");
		
	printf("\n");
	printf("2. Write an interactive program that contains an if statement that may be used to compute the area of a square ( area * side^2 ) or a circle ( area * Pi* radius^2 ) after prompting the user to type the first character of the figure name (S or C).\n");
	char type;
	float area, side, radius;
	const long double PI = 3.141592653589793238L;
	
	printf("Enter a type (S/s for Square or C/c for Circle) : ");
	scanf("%c", &type);
	
	if(type == 'S' || type=='s'){
		printf("Enter a side : ");
		scanf("%f", &side);
		area = side*side;
		printf("Area of a square : %f", area);
	}
	else if (type=='C' || type=='c'){
		printf("Enter a radius : ");
		scanf("%f", &radius);
		radius = radius*radius;
		area = PI*radius;
		printf("Area of a circle : %f", area);
	}
		
	getchar(); getchar(); 
	return (0);	
}
