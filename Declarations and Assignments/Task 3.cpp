#include <stdio.h>

int main(){
	int fahrenheit;
	double celsius;
	
	printf("Enter fahrenheit : ");
	scanf("%d", &fahrenheit);
	celsius = 0.56*(fahrenheit-32);
	printf("%.2lf celsius", celsius);
	return 0;
}
