#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: string pointer
 * @c: Source character
 *
 * Description: Add question here
 * Return: c (success) and 0[NULL] (failure) to execute
 */
char *_strchr(char *s, char c)
{
	int i;
	int b;

	while (s[i])
	{
		i++;
	}

	for (b = 0; b <= i; b++)
	{
		if (s[i] == c)
		{
			s += b;
			return (s);
		}
	}

	return (0);
}
