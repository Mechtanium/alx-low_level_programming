#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Reverses string
 * @s: Info on argc.
 *
 * Description: Prints a string in reverse using _putchar
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
