#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;

	if (s1 == 0 || s2 == 0)
	{
		return (NULL);
	}

	arr = malloc(strlen(s1) + strlen(s2) + 1);

	strcpy(arr, s1);
	strcpy(arr, s2);

	return (arr);
}
