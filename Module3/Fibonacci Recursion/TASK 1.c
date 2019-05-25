/*
Write a recursive function fast_fib to compute a pair of Fibonacci numbers, F( n + 1) and F( n ). Function fast_fib should make only one recursive call.

Algorithm
if n is 1
The pair to send back is 1, 1.
else
Use fast_fib to compute F( n ) and F( n - 1).
The pair to send back is [F( n ) + F( n - 1)], F( n ).
*/

#include <stdio.h>
int fast_fib(int n, int last, int current)
{
	if (n == 1)
		return current;
	else
		return fast_fib(n-1, current, last + current);
}

int *fibonacci(int n)
{
	int *fib_pair=(int*)malloc(sazeof(int)*2);
	
	if (n == 1){
		fib_pair[0]=1;
		fib_pair[1]=1;
	}
	else{
		fib_pair[0]=fast_fib(n,0,1);
		fib_pair[1]=fib_pair[0]+fast_fib(n-1,0,1);
	}
	return (fib_pair);
}

int main(){
	printf ("%i", *fibonacci(7));
}
