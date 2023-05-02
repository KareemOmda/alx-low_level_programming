#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of listint_t list.
 *
 * @h: head of the linklist node
 *
 * return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}

