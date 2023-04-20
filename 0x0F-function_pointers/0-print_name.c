#include "function_pointers.h"

/**
 * print_name - a function that print name
 * @name: name given
 * @f: function names
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
