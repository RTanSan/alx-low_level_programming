#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: //
 * @n: //
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodes = 0;

	if (head == NULL)
	{
		return (0);
	}

	nodes = malloc(sizeof(listint_t));
	if (nodes == NULL)
	{
		return (0);
	}

	nodes->n = n;
	nodes->next = *head;
	*head = nodes;

	return (nodes);
}
