#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Description: print numbers from zero through nine and end with a new line.
 * Return: 0 (success) and 1 (failure) to execute
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}

