#include "main.h"
/**
 * _strlen_recursion - Prints length of a string.
 * @s: the string to printed
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pali_checker - check if s is palindrom.
 * @s: string address.
 * @i: the left index.
 * @j: he right index.
 * Return: 1 if s is palindrom, 0 otherwise.
 */
int pali_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pali_checker(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if s is palindrom
 * @s: address for string.
 *
 * Return: 1 if n prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pali_checker(s, 0, _strlen_recursion(s) - 1));
}
