#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated
 *
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
		
	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	
	return (ptr);
}
