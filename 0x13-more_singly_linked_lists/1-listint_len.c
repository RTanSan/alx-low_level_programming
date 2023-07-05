#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: //
 *
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *list;

	if (h == NULL)
	{
		return (0);
	}

	for (list = h; list != NULL; list = list->next)
	{
		nodes++;
	}

	return (nodes);
}
