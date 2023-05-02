#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a listint_t list
 *
 * @head: head of the list
 *
 * Return: NULL if fail
 */

void free_listint(listint_t *head)
{
	listint_t *nxt;

	while (head != NULL)
	{
		nxt = head->nxt;
		free(head);
		head = nxt;
	}
}
