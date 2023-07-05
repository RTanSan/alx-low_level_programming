#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: //
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node = 0;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
