#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: //
 *
 * Return: number of nodes
 * Description: You are allowed to use printf
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *list;

	if (h == NULL)
	{
		return (0);
	}

	for (list = h; list != NULL; list = list->next, nodes++)
	{
		printf("%d\n", list->n);
	}

	return (nodes);
}
