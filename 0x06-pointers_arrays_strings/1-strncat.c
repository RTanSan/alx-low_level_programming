#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strncat - conca`tenates two strings.
 * @dest: 1st strings.
 * @src: 2nd strings.
 * @n: bytes
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i, j = 0;

	if (dest == 0 || src == 0)
	{
		return (0);
	}

	while (dest[j] != '\0')
	{
		j++;
	}


	for (i = 0; src[i] != '\0' && i < n; ++i, ++length, ++j)
	{
		dest[j] = src[i];
	}

	dest[j] = '\0';

	return (dest);
}
