#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: A pointer to the memory block to be filled.
 * @b:  The constant byte value to be set in each byte of the memory block.
 * @n: The number of bytes to be set to the value b.
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
