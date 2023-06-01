#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * tring_toupper - changes all lowercase letters of a string to uppercase.
 * @s: parameter
 * Return: return uppercase converted letters
 */
char *string_toupper(char *s)
{
	int i = 0;


	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
	}

	return (s);

}
