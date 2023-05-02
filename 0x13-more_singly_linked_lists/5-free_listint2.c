#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function frees a listint_t list
 * @head: double pointer of lists
 *
 * rturn: void
 */

void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nxt = (*head)->nxt;
		free(*head);
		*head = nxt;
	}
}
