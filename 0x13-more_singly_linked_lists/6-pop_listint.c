#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: //
 * Description: if the linked list is empty return 0
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *node = 0;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	node = *head;
	*head = (*head)->next;
	n = node->n;
	free(node);

	return (n);
}
