#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_chessboard -  prints the chessboard.
 * @a:
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	size_t m = 0;
	size_t n = 0;

	if (a == NULL)
	{
		return;
	}

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			putchar(a[m][n]);
		}
		putchar('\n');
	}
}
