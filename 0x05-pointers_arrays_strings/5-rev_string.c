#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: string.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length, start, end;
	char temp;

	length = strlen(s);
	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
