#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Add two numbers
 * @a: Integer number
 * @b: Integer number
 *
 * Description: Add two numbers
 * Return: Return the integer sum.
 */
int op_add(int a, int b)
{
	printf("%s\n", "A");
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: Integer number
 * @b: Integer number
 *
 * Description: Substract b from a
 * Return: Returns the result
 */
int op_sub(int a, int b)
{
	printf("%s\n", "S");
	return (a - b);
}

/**
 * op_mul - Calculates products
 * @a: Integer number
 * @b: Integer number
 *
 * Description: Calculates the product of a and b
 * Return: Returns result
 */
int op_mul(int a, int b)
{
	printf("%s\n", "M");
	return (a * b);
}

/**
 * op_div - Calculates quotients
 * @a: Integer number
 * @b: Integer number
 *
 * Description: Caluclates a divided by b
 * Return: Returns the result
 */
int op_div(int a, int b)
{
	printf("%s\n", "D");
	return (a / b);
}
/**
 * op_mod - Calculates modulus
 * @a: Integer number
 * @b: Integer number
 *
 * Description: Calculates the modulus of a by b
 * Return: Returns the result
 */
int op_mod(int a, int b)
{
	printf("%s\n", "%");
	return (a % b);
}

