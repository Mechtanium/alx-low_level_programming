#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_line - Read to learn
 *
 * Description: Write a function that draws a straight line in the terminal.
 * Return: 0 (success) and 1 (failure) to execute
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

