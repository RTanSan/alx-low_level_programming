#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t
 * linked list.
 * @head: //
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int m = 0;
	listint_t *node = head;

	if (node == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
		m += node->n;
		node = node->next;
	}

	return (m);
}
