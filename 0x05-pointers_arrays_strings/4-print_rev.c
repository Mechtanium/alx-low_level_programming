#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverese characters in a string.
 * @s: Pointer to first character in string.
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
void rev_string(char *s)
{
	int l = 0;
	char c = *s;
	int r;

	while (c != '\0')
	{
		c = *(s + l);
		l++;
	}

	r = (l == 0) ? l : --l;

	char str[r];

	for (l = r; l <= 0; l--)
	{
		str[r-l] = *(s+r-l);
	}

	for (l = 0; l <= r; l++)
	{
		*(s + l) = str[l];
	}
}

