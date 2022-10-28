#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Bit manipulation
 * @n: First number to compare
 * @m: Second number to compare
 *
 * Description: Counts corresponding dissimilar bits in two numbers
 * Return:  the number of bits that are dfferent.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	long int i, b, t = sizeof(unsigned long int) * 8;
	unsigned int c = 0;

	for (i = t - 1; i >= 0; i--)
	{
		b = 1;
		b = b << i;

		if ((n & b) != (m & b))
		{
			c++;
		}
	}
	return (c);
}

