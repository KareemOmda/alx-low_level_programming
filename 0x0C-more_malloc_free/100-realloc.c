#include "main.h"

/**
 * _realloc - reallocates memory block using malloc and free
 *
 * @ptr: pointer to memory was allocated
 * @old_size: the size, in bytes, of allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer allocate new size memory, null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		c[i] = oldp[i];
	free(ptr);
	return (c);
}
