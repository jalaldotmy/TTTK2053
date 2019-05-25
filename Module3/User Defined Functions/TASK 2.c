//Write a function that takes score as parameter and computes and returns letter grade based on the scale below.
//80-100 A
//60-79 B
//40-59 C
//0-39 D

#include <stdio.h>

char latter_grade (int score){
	if (score<=39)
		return 'D';
	else if (score<=59)
		return 'C';
	else if (score<=79)
		return 'B';
	else if (score<=100)
		return 'A';
}

int main(){
	int score = 40;
	printf("Your Score: %i Grade: %c", score, latter_grade(score));
	return 0;
}
