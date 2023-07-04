#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h:
 *
 * Return:  number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
	{
		n++;
	}

	return (n);
}
