#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -  function that frees a "listint_t" list.
 * @head: //
 * Description: The function sets the "head" to "NULL"
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node = 0;
	listint_t *next = 0;

	if (head == NULL)
	{
		return;
	}

	node = *head;
	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}

	*head = 0;
}
