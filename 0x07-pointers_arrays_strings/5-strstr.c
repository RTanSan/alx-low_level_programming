#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string to search within
 * @needle: the substring to find
 *
 * Return: Returns a pointer to the beginning of the located substring, or NUL
 * L if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n;

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
