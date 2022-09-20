#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - Cuts string in half
 * @str: String to be cut in half
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
void puts_half(char *str)
{
	int l = 0;
	char c = *str;
	int i = 0;
	int n;

	while (c != 0)
	{
		c = *(str + l);
		l++;
		_putchar(++i + 48);
		_putchar(':');
		_putchar(' ');
		_putchar(c);
		_putchar('\n');
	}

	/* l returns the number of elements in the array not the last index */

	_putchar(l + 48);
	n = (l % 2 == 0) ? l / 2 : (l - 1) / 2;
	_putchar(n + 48);

	for (i = n + 1; i < l; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

