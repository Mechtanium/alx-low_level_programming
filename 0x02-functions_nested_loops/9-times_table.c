#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints 9 times table
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			int l = (int) k / 10;
			int m = (k % 10) + 48;

			if (l > 0)
			{
				_putchar(l + 48);
			}

			_putchar(m);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
	return (0);
}

