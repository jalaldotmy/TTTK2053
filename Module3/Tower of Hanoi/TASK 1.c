// Write a a recursive function in C to solve Tower of Hanoi problem.

#include <stdio.h>

void tower(int,char,char,char);
int main(){
	int n = 3;
	tower(n,'S','A','D');
	return 0;
}

void tower(int n,char sou,char aux,char des){
	if (n==1)
		printf("Move from tower %c to tower %c\n", sou, des);
	else {
		tower(n-1,sou,des,aux);
		tower(1, sou,aux,des);
		tower(n-1,aux,sou,des);
	}
}
