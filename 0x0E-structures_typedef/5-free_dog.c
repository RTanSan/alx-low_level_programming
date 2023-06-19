#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.(types)
 * @d: pointer
 *
 * Return:
 */
void free_dog(dog_t *d)
{
	free(d);
}
