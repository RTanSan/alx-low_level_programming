#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t
 * @head: 1min
 * @index: 1min
 *
 * Description: where index is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	listint_t *current = head;

	while (current != NULL)
	{
		if (n++ == index)
		{
			return (current);
		}
		current = current->next;

	}
	return (0);
}
