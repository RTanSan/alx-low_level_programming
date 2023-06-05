#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to search
 * @accept: string of characters to match
 *
 * Return: Returns the number of bytes in the initial segment of s which consi
 * st only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t i = 0;
	size_t n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				break;
		}
		if (accept[n] == '\0')
			break;
	}
	return (i);
}
