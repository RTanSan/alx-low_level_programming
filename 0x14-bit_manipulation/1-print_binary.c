#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the binary representation of a number.
 *
 * Description: You are not allowed to use arrays, You
 * are not allowed to use malloc, You are not allowed to
 * use the % or / operators
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int i;

	m = sizeof(unsigned long int) * 8;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (i = 0; i < m; i++)
	{
		if ((n >> (m - 1 - i)) & 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
