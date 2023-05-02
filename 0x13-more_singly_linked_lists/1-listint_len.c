#include "lists.h"

/**
 * listint_len - number of elements in  linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
	h = h->next;
		c++;
	}
	return (c);
}
