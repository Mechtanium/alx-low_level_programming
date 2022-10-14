#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print numbers
 * @format: Char pointer to format string
 *
 * Description: Print each variable argument element with separator between.
 * Return: Void (Nothing).
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, n = 0;
	va_list ls;
	char *s;

	va_start(ls, format);

	while (format[n])
	{
		n++;
	}
	n++;

	while (n && format[i])
	{
		switch (format[i])
		{
			case 'c':
				if (i)
					printf(", ");
				printf("%c", va_arg(ls, int));
				break;
			case 'i':
				if (i)
					printf(", ");
				printf("%d", va_arg(ls, int));
				break;
			case 'f':
				if (i)
					printf(", ");
				printf("%f", va_arg(ls, double));
				break;
			case 's':
				if (i)
					printf(", ");
				s = va_arg(ls, char *);

				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:

				break;
		}
		i++;
		n--;
	}

	printf("\n");
	va_end(ls);
}

