#include <stdio.h>

int main (void)
{
	int n, p=1, multiply;
	
	printf("Enter value of n\n");
	scanf("%d", n);

	while (n>=0){
		p = n*p;
		n--;

		printf("%d\n", p);
	}
}
