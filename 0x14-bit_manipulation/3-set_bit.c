#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - get bit value
 * @n: Number to check
 * @index: Index to check at
 *
 * Description: Gets the value of a bit at a given index.
 * Return: Returns 0 or 1 depending on bit value and -1 if error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > 63)
		return (-1);

	b = 1;
	b = b << index;

	*n = (*n | b);
	return (1);
}
