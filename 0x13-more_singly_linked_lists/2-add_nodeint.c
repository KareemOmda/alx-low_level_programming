#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at the beginning of listint_t list.
  *
  * @head: head of the double pointer
  * @n: int add list
  * return: null if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *str;

	if (head == NULL)
		return (NULL);
	str = malloc(sizeof(listint_t));
	if (str == NULL)
		return (NULL);
	str->n = n;
	str->next = *head;
	*head = str;
	return (str);
}
