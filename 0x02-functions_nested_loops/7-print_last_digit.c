#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Returns the last digit of any number
 * @d: the integer to be analysed
 *
 * Description: Uses the modulus operator to divide by 10 in a loop.
 * Return: Remainder of d % 10
 */
int print_last_digit(int d)
{
	long int n = d;

	if (n > 0)
	{
		int r = n % 10;

		_putchar(r + 48);
		return (r);
	}
	else
	{
		int r = (n * (-1)) % 10;

		_putchar(r + 48);
		return (r);
	}
}

