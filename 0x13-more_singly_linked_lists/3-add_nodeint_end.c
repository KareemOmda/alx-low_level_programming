#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - adds a node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int adds the list
  * Return: NULL if it failz
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
