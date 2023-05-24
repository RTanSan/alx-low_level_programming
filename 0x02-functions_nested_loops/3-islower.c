#include <stdio.h>
#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 *
 * @c: character to check
 * Return: 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
