#include <stdio.h>
#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: binary to be printed
 *
 * Return: return 0 (success)
 */
void print_binary(unsigned long int n)
{
	int b = 0;
	int i = 1;
	int r;

	if (n == 0)
	{
		putchar ('0');
		return;
	}

	while (n != 0)
	{
		r = n % 2;
		n /= 2;
		b += r * i;
		i *= 10;
	}
	putchar (b);
}
