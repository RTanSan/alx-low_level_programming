#include <stdio.h>
#include "main.h"

/**
 * print_line -  draws a straight line in the terminal.
 *
 * @n: number of times the character _ should be printed
 * Return: nothing to return
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
