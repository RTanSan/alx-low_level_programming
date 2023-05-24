#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: digit of a number.
 * Return:  value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	putchar(m);
	return (m);
}
