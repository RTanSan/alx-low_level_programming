#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: value of a bit to 1 at a given index.
 * @index: index wanted
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (n == 0)
	{
		return (0);
	}

	return (m = 1 << index);
	*n = *n | m;

	return (0);
}
