#include "main.h"
/**
 * factorial - calculete the factorial of int
 * @n:int
 * Return: an int
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
			return (i);

}
