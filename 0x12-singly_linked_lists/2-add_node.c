#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function returns the length of a string.
 * @s : s is character
 * Return: value is i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add  new node at the beginning of list_t list.
 * @head: head of list_t list
 * @str: value to insert into element.
 * Return: Number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *i;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);
	i->str = strdup(str);

	i->len = _strlen(str);
	i->next = *head;
	*head = i;

	return (i);
}
