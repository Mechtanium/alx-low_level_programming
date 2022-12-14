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
	}

	l != 0 ? l-- : l;

	/* l returns the number of elements in the array not the last index */

	n = (l % 2 == 0) ? l / 2 : (l + 1) / 2;

	for (i = n; i < l; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

