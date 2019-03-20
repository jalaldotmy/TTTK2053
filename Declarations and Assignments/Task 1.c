#include <stdio.h>

int main(){
	int radius;
	float P = 3.14159265359, C;
	
	printf("Enter radius : ");
	scanf("%d", &radius);
	
	C = (2*P)*radius;
	
	printf("Circle Circumference : %f", C);
	return 0;
}
