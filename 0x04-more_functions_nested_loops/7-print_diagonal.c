#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int m, o;

	if (n <= 0)
	{
		putchar('\n');
	}
	for (m = 0; m < n; m++)
	{
		for (o = 0; o < m; o++)
		{
			{
				putchar(' ');
			}
	}
	putchar('\\');
	putchar('\n');
	}
}
