//Complete the following recursive function that calculates the value of a number ( base ) raised to a power. Assume that power is a nonnegative integer.

#include <stdio.h>

int power_raiser(int base, int power)
{
	int ans;
	if (power == 1)
		ans = base;
	else
		ans = base * power_raiser(base, power-1);
	return (ans);
}

int main(){
	int base = 2, power = 5;
	printf("%i", power_raiser(base, power));
}
