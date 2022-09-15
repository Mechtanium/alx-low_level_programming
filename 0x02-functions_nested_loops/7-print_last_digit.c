#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Returns the last digit of any number
 * @n: the integer to be analysed
 *
 * Description: Uses the modulus operator to divide by 10 in a loop.
 * Return: Remainder of n % 10
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		int r = n % 10;
		_putchar(r);
		return (r);
	}
	else
	{
		int r = (n * (-1)) % 10;

		_putchar(r);
		return (r);
}

