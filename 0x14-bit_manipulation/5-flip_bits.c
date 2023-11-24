#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another.
 * @n: number of bits needed
 * @m: number of bits needed
 *
 * Return: succes or 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;

	if (n == 0 || m == 0)
	{
		return (0);
	}

	while (m > 0)
	{
		bits++;
		m &= (m- 1);
	}

	return (bits);
}
