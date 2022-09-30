#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculates factorial of n
 * @n: Number to calculate
 *
 * Description: Calculates factorial of n recursively
 * Return: Final result of computation as integer.
 */
int factorial(int n)
{
	int f;

	if (n < 1)
		return (-1);
	f = n * ((n > 1) ? factorial(n - 1) : 1);

	return (f);
}

