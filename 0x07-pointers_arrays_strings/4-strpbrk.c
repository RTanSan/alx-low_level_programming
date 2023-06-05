#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: qwert
 * @accept: wertyu
 *
 * Return: qwedrf
 */
char *_strpbrk(char *s, char *accept)
{
	size_t i = 0;
	size_t n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (&s[i]);
			}

		}
	}

	return (0);
}
