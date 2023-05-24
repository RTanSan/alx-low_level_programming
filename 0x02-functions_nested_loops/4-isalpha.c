#include <stdio.h>
#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: the letter to check if  lowercase or uppercase
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
