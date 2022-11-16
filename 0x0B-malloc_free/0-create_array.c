#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * create_array - Create an initialized varably sized array
 * @size: size of the array to be created.
 * @c: Initialization character.
 *
 * Description: Allocates a memory block then inserts the "c" character
 * every byte. Remember to free memory.
 * Return: A pointer to the frist element of the memory block created.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m = malloc(size * sizeof(char));

	if (m)
	{
		for (i = 0; i < size; i++)
		{
			m[i] = c;
		}
		return (m);
	}

	return ((char *) NULL);
}
