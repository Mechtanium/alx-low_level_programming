#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum up all numbers sent in.
 * @n: const unsigned integer number of variable arguments
 * @...: Variable arguments of type int.
 *
 * Description: Add up all the numbers sent in.
 * Return: Sum of all the numbers as integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ls, int);

	va_end(ls);

	return (sum);
}

