#include <stdio.h>

int main (void)
{
	int i, n , j, output=1; 
	
	printf("Enter size : ");
	scanf("%d", &n);
		
	for (i = 0; i <= n; i++) {
		if (i==0)
			output;
		else
			output = output*2;
		printf("%d \t %d\n", i, output);
	}
	getchar(); getchar(); 
	return (0);
}
