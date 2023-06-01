#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: 1st strings.
 * @src: 2nd strings.
 * @n: bytes
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (dest == 0 || src == 0)
	{
		return (0);
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
