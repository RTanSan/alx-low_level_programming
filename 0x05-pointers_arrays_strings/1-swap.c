#include <stdio.h>
#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a: interger
 * @b: interger
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
