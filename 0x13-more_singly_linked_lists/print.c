#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Describe it
 * @format: String format
 *
 * Description: Describing it
 * Return: String length
 */
int _printf(const char *format, ...)
{
	int n = 0;
	va_list ls;
	buffer b;

	b.buf = calloc(1024, sizeof(char));
	b.pos = 0;

	va_start(ls, format);

	if (format == NULL)
		return (EXIT_FAILURE);

	while (format[n])
	{
		if (format[n] != '%')
		{
			b.buf[b.pos] = format[n];
			b.pos++;
		}
		else
			format_writter(format, &n, ls, &b);
		n++;
	}

	write(1, b.buf, 1024);
	va_end(ls);
	free(b.buf);
	return (b.pos);
}