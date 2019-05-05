/*
* Displays message about heart rate.
*/
#include <stdio.h>

int main(void)
{
	int pulse; /* resting pulse rate for 10 secs */
	int rest_heart_rate; /* resting heart rate for 1 minute */
	
	/* Enter your resting pulse rate */
	printf("Take your resting pulse for 10 seconds.\n");
	printf("Enter your pulse rate and press return> ");
	scanf("%d", &pulse);
	
	/* Calculate resting heart rate for minute */
	rest_heart_rate = pulse * 6;
	printf("Your resting heart rate is %d.\n", rest_heart_rate);
	
	/* Display message based on resting heart rate */
	if (rest_heart_rate > 75)
	printf("Keep up your exercise program!\n");
	else
	printf("Your heart is in doing well!\n");
	getchar(); getchar();
	return (0);
}

/*
Sample Run 1:
Take your resting pulse for 10 seconds.
Enter your pulse rate and press return> 13
Your resting heart rate is 78.
Keep up your exercise program!

Sample Run 2:
Take your resting pulse for 10 seconds.
Enter your pulse rate and press return> 9
Your resting heart rate is 54.
Your heart is doing well!
*/
