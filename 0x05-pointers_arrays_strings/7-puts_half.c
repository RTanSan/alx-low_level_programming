#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half -  prints half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, mid, i;

	length = strlen(str);
	mid = (length + 1) /  2;

	if (str == NULL)
	{
		return;
	}

	for (i = mid; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
