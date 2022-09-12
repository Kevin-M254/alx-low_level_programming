#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * This program will assign a random number to the variable n each time it
 * return: Always return 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d id negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	}else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}