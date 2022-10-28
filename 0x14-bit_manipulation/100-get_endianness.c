#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Get a systems endianness
 *
 * Description: Get how the systems stores values larger than 1 byte.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	else
		return (0);

	return (EXIT_SUCCESS);
}
