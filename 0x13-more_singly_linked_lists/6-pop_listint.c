#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list.
 * @head:
 *
 * Return: returns the head node’s data (n).
 * If the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (head == NULL)
	{
		return (0);
	}

	node = *head;
	n = node->n;

	*head = (*head)->next;

	free(node);

	return (n);
}
