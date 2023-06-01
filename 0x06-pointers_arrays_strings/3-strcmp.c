#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp -  compares two strings.
 * @s1: 1st string
 * @s2: 2nd string:
 *
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	char flag = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return(*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (flag == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
