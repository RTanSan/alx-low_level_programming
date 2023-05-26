#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing to return
 */
void more_numbers(void)
{
	int n, m;

	for (n = 0; n <= 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				putchar((m / 10) + '0');
			}
			putchar((m % 10) + '0');
		}
		putchar('\n');
	}
}
