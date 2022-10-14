#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print numbers
 * @separator: Char pointer to separator string
 * @n: Const unsigned integer number of arguments to print
 *
 * Description: Print each variable argument element with separator between.
 * Return: Void (Nothing).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;
	char *s;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		if (i && separator != NULL)
			printf("%s", separator);

		s = va_arg(ls, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
	}

	printf("\n");
	va_end(ls);
}

