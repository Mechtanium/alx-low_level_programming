#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strspn - Entry point
 * @s: search source
 * @accept: Values to search for
 *
 * Description: Add question here
 * Return: Number of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i = 0, j = 0, k;

	while (s[i])
	{
		k = n;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				n++;
				printf("%c - %c\n", s[i], accept[j]);
			}
			j++;
		}
		i++;
		if (k == n)
		{
			printf("s: %c - %c\n", s[i], accept[j]);
			printf("%d - K: %d\n", n, k);
			return (n);
		}
	}
	return (0);
}
