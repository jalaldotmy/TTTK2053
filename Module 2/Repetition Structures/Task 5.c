#include <stdio.h>

int main (void)
{
	int n, i,j,k,l;
	
	printf("Enter value : ");
	scanf("%d", &n);
	for (i = 0; i <= n ; i++) {
		for (j =0; j<=i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	
	for (k = n; k >= 0 ; k--) {
		for (l =0; l<k; l++){
			printf("%d ", l);
		}
		printf("\n");
	}
	
	getchar(); getchar(); 
	return (0);
}
