#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Print 0 through 14 10 times
 *
 * Description: Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: 0 (success) and 1 (failure) to execute
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				int k = (int) j / 10;
				_putchar(k);
			}
			_putchar(j % 10);
		}
		_putchar('\n');
	}
}

