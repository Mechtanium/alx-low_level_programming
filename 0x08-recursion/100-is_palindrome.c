#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * checker - Palindrome helper function
 * @s: Operating string
 * @p: Position counter and base case terminator at 0
 *
 * Description: Checks first character and pth character recursively until
 * a difference is found.
 * Return: 1 for a successful palindrome  0 otherwise.
 */
int checker(char *s, int p)
{
	printf("%c vs %c\n", s[0], s[p]);
	if (p < 0)
		return (1);
	return ((s[0] != s[p]) ? 0 : checker(s + 1, p - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String pointer of string to be checked.
 *
 * Description: Check is the string is a palindrome by comparing opposite
 * ended letters.
 * Return: 1 for a successful palindrome  0 otherwise.
 */
int is_palindrome(char *s)
{
	int p = 0;

	while (s[p])
	{
		p++;
	}

	return (checker(s, p - 1));
}

