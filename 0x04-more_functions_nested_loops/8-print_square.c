#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square,
 *
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int m, n;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (m = 0; m < size; m++)
	{
		for (n = 0; n < size; n++)
		{
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
}
