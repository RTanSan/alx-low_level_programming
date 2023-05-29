#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 *  @s: length of a string
 *  Return: length of a string (t)
 */
int _strlen(char *s)
{
	int t = 0;
	
	if (s == 0)
	{
		return (0);
	}
	while (s[t] != '\0')
	{
		t++;
	}
	return (t);
}
