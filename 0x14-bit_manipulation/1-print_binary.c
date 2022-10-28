#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - Bit manipulation
 * @n: Number to be printed
 *
 * Description: Convert and print binary number from decimal.
 * Return: void (Nothing)
 */
void print_binary(unsigned long int n)
{
	long int i, b, t = sizeof(unsigned long int) * 8, c = 0;

	if (n == 0)
		_putchar('0');

	for (i = t - 2; i >= 0; i--)
	{
		b = 1;
		b = b << i;

		if ((n & b) == 0)
		{
			if (c)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			c = 1;
		}
	}
}
