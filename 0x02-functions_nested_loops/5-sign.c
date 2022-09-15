#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * print_sign - Checks for the sign of the number
 * @n: The character to be judged
 *
 * Description: Uses if statment and logical operators
 * Return: -1 (negatve), 0 (zero) and 1 (positive) to execute
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}

