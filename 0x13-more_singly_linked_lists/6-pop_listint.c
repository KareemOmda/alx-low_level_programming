#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node
 * @head: double pointer
 *
 * return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
