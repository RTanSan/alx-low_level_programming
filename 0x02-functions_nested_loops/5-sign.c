#include <stdio.h>
#include "main.h"

/**
 * print_sign -  a function that prints the sign of a number.
 *
 * @n: the sign of a number to be printed
 * Return: according to the if, else if, else statement
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
	printf("\n");
	return (0);
}
