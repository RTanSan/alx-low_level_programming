#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: //
 * Description(0): You are not allowed to use arrays
 * Description(1): You are not allowed to use "malloc"
 * Description(2): You are not allowed to use the "%" or "/" operators
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned int dec_value = 0;

	if (n == NULL)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		dec_value = dec_value * 2 + (b[i] - '0');
		i++;
	}

	return (dec_value);
}
