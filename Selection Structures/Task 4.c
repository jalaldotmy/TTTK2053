#include <stdio.h>

int main(void)
{
	int watts;

	printf("Enter watts : ");
	scanf("%d", &watts);

	printf("Brightness (in Lumens) : ");
	switch (watts) {
		case 15 :
		printf("125\n");
		break;
		case 25 :
		printf("215\n");
		break;
		case 40 :
		printf("500\n");
		break;
		case 60 :
		printf("880\n");
		break;
		case 75 :
		printf("1000\n");
		break;
		case 100 :
		printf("1675\n");
		break;
		default:
		printf("Unknown\n");
	}
	getchar(); getchar(); 
	return (0);
}
