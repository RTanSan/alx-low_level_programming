#include <stdio.h>

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: the letter to check if  lowercase or uppercase
 * Returns: 0 otherwise
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
}
