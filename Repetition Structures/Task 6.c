#include <stdio.h>

int main (void){
	int sum = 0, odd, n=10;
	
	for (odd = 1; odd < n; odd = odd + 2)
		sum = sum + odd;
	printf("Sum of the positive odd numbers less than %d is %d\n",n, sum);
	
	do
		sum = sum + odd;
	while (odd + 2 < n);
	printf("Sum of the positive odd numbers less than %d is %d\n",n, sum);

	
	getchar(); getchar(); 
	return (0);
}
