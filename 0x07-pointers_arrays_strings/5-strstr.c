#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring.
 * @haystack: . 
 * @needle: .
 *
 * Return: .
 */
char *_strstr(char *haystack, char *needle)
{
	char* n;

	n = strstr(haystack, needle);

	if (n == NULL)
	{
		return (0);
	}

	else
	{
		return (n);
	}
	return (0);
}
