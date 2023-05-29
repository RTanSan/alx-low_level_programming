#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	if (str == 0)
	{
		return;
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			putchar (str[i]);
		}
		putchar ('\n');
	}
}
