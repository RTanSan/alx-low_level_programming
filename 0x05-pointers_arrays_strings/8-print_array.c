#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers,
 * @a: pointer declaration
 * @n: elements of an array of integers
 *
 * Return: return void
 */
void print_array(int *a, int n)
{
	int m = 0;

	if (a == 0)
	{
		return;
	}


	printf("%d", a[0]);


	for (m = 1; m < n; m++)
	{
		printf(", %d", a[m]);
	}


	putchar('\n');
}
