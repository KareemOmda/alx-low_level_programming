#include "variadic_functions.h"

/**
 * print_strings - Prints strings to the function separed by separators
 * @separator: A string that used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int j;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (j = 0; j < n; j++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
