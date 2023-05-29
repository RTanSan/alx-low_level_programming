#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, n = 0;

	if (s == 0)
	{
		return;
	}
	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; s[i] >= 0; i--)
		{
			putchar (s[i]);
		}
		putchar ('\n');
}
