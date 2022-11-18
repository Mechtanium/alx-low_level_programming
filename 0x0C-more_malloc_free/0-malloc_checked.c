#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - creates mem allocation
 * @b: Size to be allocated
 *
 * Description: Allocates memory.
 * Return: Address to allocated memmory on success and EXIT_FAIL = 98 on fail.
 */
void *malloc_checked(unsigned int b)
{
	char *mem = malloc(b);

	if (!mem)
		exit(98);

	return (mem);
}

