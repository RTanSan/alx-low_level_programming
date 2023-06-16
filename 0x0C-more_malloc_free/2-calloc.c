#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb:  an array of elements
 * @size: bytes
 *
 * Return: 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int b;
	char* result;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	b = nmemb * size;
	result = malloc(b);

	if (result != NULL)
	{
		memset(result, 0, b);
	}

	return (result);
}
