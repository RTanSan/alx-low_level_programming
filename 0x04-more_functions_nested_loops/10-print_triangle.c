#include <stdio.h>
#include "main.h"

/**
 * print_triangle -  prints a triangle
 *
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int n, m;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (m = 0; m < size; m++)
	{
		for (n = 1; n < size; n++)
		{
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
}
