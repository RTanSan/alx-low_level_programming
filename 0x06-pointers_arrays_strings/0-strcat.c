#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: 1st dest string
 * @src: 2nd src string
 *
 * Return: return void
 */
char *_strcat(char *dest, char *src)
{
	int length = strlen(dest);
	int i;

	if (dest == 0 || src == 0)
	{
		return (0);
	}

	for (i = 0; src[i] != '\0'; ++i, ++length)
	{
		dest[length] = src[i];
	}

	dest[length] = '\0';

	return (dest);
}
