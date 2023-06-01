#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: 1st string
 * @n: array
 *
 * Return: original and reversed array
 */
void reverse_array(int *a, int n)
{
	int m;
	int i = 0;
	int a1, z1;

	a1 = 0;
	z1 = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		m = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = m;
		a1++;
		z1--;
	}
	for (i = 0; i < n; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
}
