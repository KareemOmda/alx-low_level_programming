#include "main.h"

/**
 * str_checker - check if two strings identical.
 * @s1: string_1 address
 * @s2: string_2 address
 * @i: left index.
 * @j: special index.
 * Return: 1 if s is palindrom, 0 otherwise.
 */
int str_check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_check(s1, s2, i + 1, j) || str_check(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check if strings considered identical
 * @s1: base for string.
 * @s2: base for string.
 *
 * Return: 1 if considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_check(s1, s2, 0, 0));
}
