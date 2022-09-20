#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - Reverese characters in a string.
 * @s: Pointer to first character in string.
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
void print_rev(char *s)
{
	int i = 0;
	int l;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (l = i; l <= 0; l--)
	{
		_putchar(*(s + l));
	}

	_putchar('\n');
}
