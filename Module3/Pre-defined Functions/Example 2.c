// Calculate the sine of the angel

#include <stdio.h>
#include <math.h>

int main(void)
{
	double angle;
	printf("Input angle in radians: \n");
	scanf("%lf", &angle);
	printf("The sine of the angle is %f\n", sin(angle) );
	return 0;
}
