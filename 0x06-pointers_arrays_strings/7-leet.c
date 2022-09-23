#include <stdlib.h>
#include <stdio.h>

/**
 * leet - Entry point
 * @s: String gets uppercased per word
 *
 * Description: Add question here
 * Return: String point s
 */
char *leet(char *s)
{
	int i = 0, n = 0;
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	int b[] = {4, 3, 0, 7, 1};

	while (s[i])
	{
		n = 0;

		while (n < 5)
		{
			if (a[n] == s[i] || a[n] - 32 == s[i])
			{
				s[i] = b[n];
			}
			n++;
		}
		i++;
	}
	return (s);
}

