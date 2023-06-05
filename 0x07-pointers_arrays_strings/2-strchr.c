#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character
 *
 * Return: Returns a pointer
 */
char *_strchr(char *s, char c)
{
	s = strchr(s, c);

	if (s == 0)
	{
		return (0);
	}

	else
	{
		return (s);
	}
	return (s);
}
