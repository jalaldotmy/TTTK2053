/* Multiply Product by a nonzero x */

#include <stdio.h>

int main(void)
{
	int x, product = 10;
	
	printf("Enter a value for x : \n");
	scanf("%d", &x);
	
	if (x != 0)
	product = product * x;
	
	printf("Product = %d.\n", product);
	
	getchar(); getchar();
	return (0);
}
