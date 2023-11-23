#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: value of a bit to 0 at a given index.
 * @index: wanted index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0)
	{
		return (0);
	}

	for (index = 0; index != '\0'; index++)
	{
		return (*n | (1 << (index - 1)));
	}
	return (-1);
}
