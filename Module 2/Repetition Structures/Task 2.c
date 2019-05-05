#include <stdio.h>

int main (void)
{
	int smallest, largest, i;
	float output; 
	
	printf("Enter smallest number of centimeters : ");
	scanf("%d", &smallest);
	printf("Enter largest number of centimeters : ");
	scanf("%d", &largest);
	if (smallest>=largest)
		printf("Smallest number is grather than or equal largest number of centimeters");
	
	printf("Centimeters \t Inch\n");
	for (i = smallest; i <= largest; i+=10) {
		output = i*0.3937;
		printf("%d \t\t %f\n", i, output);
	}
	getchar(); getchar(); 
	return (0);
}
