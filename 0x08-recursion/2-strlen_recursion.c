#include "main.h"
/**
 * _strlen_recursion - prints length of string
 * @s:string
 * Return:j
 */
int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j++;
		j += _strlen_recursion(s + 1);

	}
	return (j);
}
