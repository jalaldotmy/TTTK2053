#include <stdio.h>

int main (void)
{
	int people = 9870, count_years=0, surpass = 30000;
	float population_increases = 0.1; 
	
	printf("Years \t Population Increases\n");
	while (people<=surpass){
		count_years++;
		people += people*population_increases;
		printf("%d \t %d\n", count_years, people);
	}

	getchar(); getchar(); 
	return (0);
}
