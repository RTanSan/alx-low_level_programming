#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: //
 * Description: where b is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * (1) there is one or more chars in the string b that is not 0 or 1
 * (2) b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec_value = 0;

	if (b == NULL)
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
