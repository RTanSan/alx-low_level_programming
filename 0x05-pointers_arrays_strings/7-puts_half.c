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
	char n[100];
	int length, mid, i;

	length = strlen(str);
	mid = (length + 1) /  2;

	if (str == NULL)
	{
		return;
	}

	for (i = mid; i < length; i++)
	{
		n[i - mid] = str[i];
	}
	n[length - mid] = '\0';

	for (i = 0; n[i] != '\0'; i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
}
