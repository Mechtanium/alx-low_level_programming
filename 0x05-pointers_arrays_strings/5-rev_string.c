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
	int l;
	int r = _strlen(s);
	char c;

	for (l = 0; l <= (r / 2); l++)
	{
		c = *(s + l);
		*(s + l) = *(s + (r - l));
		*(s + (r - l)) = c;
	}

	printf("%s\n", s);

	/* char str[r];
	int ps;*/

	/*for (l = r; l <= 0; l--)
	{
		ps = r - l;
		str[ps] = *(s + ps);
	}

	printf("%s\n", str);

	for (l = 0; l <= r; l++)
	{
		*(s + l) = str[l];
	}*/
}

