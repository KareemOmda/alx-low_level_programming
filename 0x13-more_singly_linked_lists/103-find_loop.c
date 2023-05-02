#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list.
 * @head: pointer to beginning of the list
 *
 * Return: address of node were the loop starts or NULL if there no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *hare;

	tort = hare = head;
	while (tort && hare && hare->next)
	{
		tort = tort->next;
		hare = hare->next->next;
		if (tort == hare)
		{
			tort = head;
			break;
		}
	}
	if (!tort || !hare || !hare->next)
		return (NULL);
	while (tort != hare)
	{
		tort = tort->next;
		hare = hare->next;
	}
	return (hare);
}
