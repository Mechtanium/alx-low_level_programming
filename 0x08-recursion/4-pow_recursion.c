#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Calculates power/exponential
 * @x: Base number.
 * @y: Exponent.
 *
 * Description: Calculates recursively base number x raised to exponent y.
 * Return: Results of exponentiation.
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	i = x * _pow_recursion(x, y - 1);
	return (i);
}

