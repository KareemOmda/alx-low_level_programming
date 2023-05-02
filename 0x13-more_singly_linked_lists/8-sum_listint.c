#include "lists.h"

/**
 * sum_listint - sum all the data (n) of listint_t linked list.
 * @head: pointer to first node
 *
 * return: sum all data
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
