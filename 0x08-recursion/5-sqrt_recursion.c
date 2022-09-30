#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _sqrt_iterator - Calculates square root
 * @n: int number to square root
 *
 * Description: Calculates the natural square root of a number.
 * Return: The natural square root of a number.
 */
int _sqrt_iterator(int n, int t)
{
	if (t > 43341)
	{
		return (-1);
	}
	else if (t * t == n)
	{
		return (t);
	}
	else
	{
		return (_sqrt_iterator(n, t + 1));
	}
}

/**
 * _sqrt_recursion - Calculates square root
 * @n: int number to square root
 *
 * Description: Calculates the natural square root of a number.
 * Return: The natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}

	return (_sqrt_iterator(n, 1));
}

