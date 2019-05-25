//Complete the following codes with function call from main function :

#include <stdio.h>

/*  Recursive Function multiply with Print Statements to Create Trace and Output from multiply(8, 3) */
/*
* *** Includes calls to printf to trace execution ***
* Performs integer multiplication using + operator.
* Pre: m and n are defined and n > 0
* Post: returns m * n
*/
int multiply(int m, int n){
	int ans;
	printf("Entering multiply with m = %d, n = %d\n", m, n);
	if (n == 1)
		ans = m; /* simple case */
	else
		ans = m + multiply(m, n - 1); /* recursive step */
	printf("multiply(%d, %d) returning %d\n", m, n, ans);
	return (ans);
}

/*
Entering multiply with m = 8, n = 3
Entering multiply with m = 8, n = 2
Entering multiply with m = 8, n = 1
multiply(8, 1) returning 8
multiply(8, 2) returning 16
multiply(8, 3) returning 24
*/
int main(){
	int m = 8, n = 3;
	multiply(m,n);
	return 0;
}
