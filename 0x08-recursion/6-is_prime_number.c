#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * check_prime - Checks for prime numbers
 * @n: Number the function checks
 * @i: Current modulus operand
 *
 * Description: Iterates till is find a divisor i < n with modulus 0
 * Return: 1 for prime numbers and 0 zero otherwise.
 */
int check_prime(int n, int i)
{
	if (i < 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i - 1));
}

/**
 * is_prime_number - Checks for prime numbers
 * @n: Number the function checks
 *
 * Description: Checks if the number is a prime number
 * Return: 1 for prime numbers and 0 zero otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n, n - 1));
}
