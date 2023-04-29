#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds the length of string
 * @str: string to find the length of it
 *
 * Return: the length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - add new node to end of linked list
 * @head: double pointer to linked list
 * @str: string added to the new node
 *
 * Return: a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *temp;

	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = _strlen(n->str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = n;
	return (n);
}
