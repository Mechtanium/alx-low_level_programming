#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * printer - Switches to print type
 * @format: String of format characters
 * @: Integer counter
 * @ls: va_list list of variable parameters.
 *
 * Description: Switches between c, i, f, s data types
 * Return:Void (Nothing).
 */
void printer(const char * const format, unsigned int i, va_list ls)
{
	char *s;

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
}

/**
 * print_all - Print numbers
 * @format: Char pointer to format string
 *
 * Description: Print each variable argument element with separator between.
 * Return: Void (Nothing).
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, n = 0;
	va_list ls;

	va_start(ls, format);

	while (format[n])
	{
		n++;
	}
	n++;

	while (n && format[i])
	{
		printer(format, i, ls);

		i++;
		n--;
	}

	printf("\n");
	va_end(ls);
}

