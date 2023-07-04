#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: listint_t list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	for (list = head; list != NULL; list = head)
	{
		head = head->next;
		free(list);
	}
}
