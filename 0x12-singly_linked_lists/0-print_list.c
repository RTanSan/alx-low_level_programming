#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a list_t list.
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	if (h == NULL)
	{
		return(0);
	}

	if (h->str == NULL)
	{
		printf("%s", "(nill)");
	}

	for (; h != NULL; h = h->next)
	{
		printf("%s", h->str);
		m++;

	}

	printf("\n");
	return (m);
}
