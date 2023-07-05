#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: //
 * @index: //
 * Description: where index is the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	if (node == NULL)
	{
		return (0);
	}

	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}

	return (node);
}
