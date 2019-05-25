/*  Recursive Function fibonacci */
/*
* Computes the nth Fibonacci number
* Pre: n > 0
*/

#include <stdio.h>
int fibonacci(int n)
{
	int ans;
	if (n == 1 || n == 2)
		ans = 1;
	else
		ans = fibonacci(n - 2) + fibonacci(n - 1);
	return (ans);
}

int main(){
	printf ("%i", fibonacci(7));
}
