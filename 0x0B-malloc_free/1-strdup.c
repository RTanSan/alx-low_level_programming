#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *arr;

	arr = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	strcpy(arr, str);

	return (arr);
}
