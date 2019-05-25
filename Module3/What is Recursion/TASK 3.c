//What is the output of the following program? What does function strange compute when called with a positive integer?

#include <stdio.h>
int strange(int n);
int main(void)
{
	printf("%d\n", strange(7));
}
int strange(int n)
{
	int ans;
	if (n == 1)
		ans = 0;
	else
		ans = 1 + strange(n / 2);
	return (ans);
}
