/*  Recursive Factorial Function */
/*
* Compute n! using a recursive definition
* Pre: n >= 0
*/
#include <stdio.h> 

int factorial(int n)
{
int ans;

if (n == 0)
ans = 1;
else
ans = n * factorial(n - 1);

return (ans);
}

int main (){
	int w;
	w = factorial(3);
	printf("%d",w);
}
