#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node
 * @head: double pointer
 *
 * return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *strt;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	strt = *head;
	*head = start->next;
	n = strt->n;
	free(strt);
	return (n);
}
