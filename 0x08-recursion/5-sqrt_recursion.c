#include "main.h"

/**
 * check - checks the square root of
 * @a:a int
 * @b:an int
 *
 * Return: an int
 */

int check(int c, int v)
{
	if (c * c == v)
		return (c);
	if (c * c > v)
		return (-1);
	return (check(c + 1, v));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: integer to find sqrt of it
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
