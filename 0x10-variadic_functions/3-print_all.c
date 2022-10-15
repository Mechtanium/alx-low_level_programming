#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

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

