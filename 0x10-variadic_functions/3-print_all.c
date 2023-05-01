#include "variadic_functions.h"

/**
 * print_all - prints the arguments when specified
 * @format: specifies wanted operations
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	int i;
	int flg;
	char *str;
	vlists lists;

	va_start(lists, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lists, int));
				flg = 0;
				break;
			case 'i':
				printf("%i", va_arg(lists, int));
				flg = 0;
				break;
			case 'f':
				printf("%f", va_arg(lists, double));
				flg = 0;
				break;
			case 's':
				str = va_arg(lists, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flg = 0;
				break;
			default:
				flg = 1;
				break;
		}
		if (format[i + 1] != '\0' && flg == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(lists);
}
