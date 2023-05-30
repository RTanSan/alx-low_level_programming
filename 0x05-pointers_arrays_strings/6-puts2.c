#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 -  prints every other character of a string, starting with.
 *  the first character, followed by a new line.
 *  @str: character string
 *
 *  Return: void
 */
void puts2(char *str)
{
	size_t n, m = 0;;

	if (str == 0)
	{
		return;
	}

	while (str[m] != '\0')
	{
		m++;
	}

	for (n = 0; n < m; n += 2)
	{
		putchar(str[n]);
	}

	putchar('\n');
}
