#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - checks code for Holberton School students.
 * @h: name of list
 * Return: Number of nodes.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
i	{
		i++;
		h = h->next;
	}
	return (i);
}
