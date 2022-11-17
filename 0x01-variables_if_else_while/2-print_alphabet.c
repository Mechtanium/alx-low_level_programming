#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main -  prints the alphabet
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: Exit success
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	return (EXIT_SUCCESS);
}
