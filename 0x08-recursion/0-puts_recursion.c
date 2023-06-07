#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string
 * @s: The string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
