#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * printer - Switches to print type
 * @format: String of format characters
 * @i: Integer counter
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

