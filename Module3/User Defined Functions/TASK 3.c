// Write a function to compute maximum and minimum of 2 numbers.

#include <stdio.h>

int min (int a, int b){
	if (a<b)
		return a;
	else
		return b;
}

int max (int a, int b){
	if (a>b)
		return a;
	else
		return b;
}

int main(){
	int a = 5, b = 10;
	printf("Minimum number : %i \nMaximum number : %i", min(a,b), max(a,b));
	return 0;
}
