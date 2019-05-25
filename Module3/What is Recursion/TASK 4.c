/*Write a recursive function find_sum that calculates the sum of successive integers
starting at 1 and ending at n (i.e., find_sum(n) = (1 + 2 + . . . + ( n - 1) + n ).*/

#include <stdio.h>
int addNumbers(int n);

int main()
{
    int num = 10;
    printf("Sum = %d",addNumbers(num));
    return 0;
}

int addNumbers(int n)
{
    if(n != 0)
        return n + addNumbers(n-1);
    else
        return n;
}
