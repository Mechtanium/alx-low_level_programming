#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - Entry point
 * @str: Var 1
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
void puts2(char *str)
{
	int l = 0;
	char c = *str;
	int i;
	int s;

	while (c != '\0')
	{
		c = *(str + l);
		l++;
	}

	s = (l == 0) ? l : --l;

	for (i = 0; i <= s; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
