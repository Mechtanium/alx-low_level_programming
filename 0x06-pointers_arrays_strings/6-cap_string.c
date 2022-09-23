#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * checker - Checks list
 * @c: character to check for
 *
 * Description: ...
 * Return: boolean
 */
int checker(char c)
{
	int i = 0;
	char a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
			'"', '(', ')', '{', '}', '\0'};

	while (a[i])
	{
		if (a[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * cap_string - Entry point
 * @s: String gets uppercased per word
 *
 * Description: Add question here
 * Return: String point s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (checker(s[i]) && s[i + 1] > 96 && s[i + 1] < 123)
		{
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}

