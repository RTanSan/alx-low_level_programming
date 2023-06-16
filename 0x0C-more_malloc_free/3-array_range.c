#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min: first interger
 * @max: second integer
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *str;
	int m = 0;

	str = malloc((max - min + 1) * sizeof(int));

	if (str == NULL)
	{
		return (0);
	}

	while (min <= max)
	{
		str[m] = min;
		min++;
		m++;
	}

	return (str);
}
