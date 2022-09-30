#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Computes string length
 * @s: String to be analysed
 *
 * Description: Counts each character recursively
 * Return: Integer length of the string.
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (s[0] == '\0')
		return (0);
	i = i + _strlen_recursion(s + 1);
	return (i);
}
