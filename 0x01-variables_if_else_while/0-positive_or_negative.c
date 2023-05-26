#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive ");
	}
	else if (n == 0)
	{
		printf("is zero ");
	}
	else if (n < 0)
	{
		printf("is negative ");
	}
	else
	{
		printf("%d", n);
	}
	return (0);
}
