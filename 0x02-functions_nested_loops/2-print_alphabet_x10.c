#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - writes to standard output
 *
 * Description: Doesn't use the standard library. Uses _putchar.
 * Result: 0 (success) and 1 (failure)
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;
	
	for(j = 0; i < 10; I++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(str[i]);
		}
	}

	char c = "\n";

	_putchar(c);
}

