#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: listint_t list.
 * Description: The function sets the head to NULL
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	for (list = *head; list != NULL; list = *head)
	{
		*head = list->next;
		free(list);
	}
}
