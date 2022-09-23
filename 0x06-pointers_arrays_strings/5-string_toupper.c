#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Entry point
 * @s: String pointer
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}

