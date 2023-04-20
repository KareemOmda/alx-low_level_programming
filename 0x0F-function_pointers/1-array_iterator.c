#include "function_pointers.h"

/**
 * array_iterator - a function given as
 * parameter on each element of array
 *
 * @array: array to execute function on
 * @size: the size of the array
 * @action:  a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		j = 0;
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
