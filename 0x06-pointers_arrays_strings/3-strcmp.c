#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: Var 1
 * @s2: Var 2
 *
 * Description: Add question here
 * Return: +ve if s1 is greater -ve if s2 is greater and 0 if equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r = 0;
	/*, s */

	while (*(s1 + i) && *(s2 + i))
	{
		r += (*(s1 + i) - *(s2 + i));
		i++;
	}

	/* s = i; */

	/* while (*(s1 + i)) */
	/* { */
	/*	r += *(s1 + i); */
	/*	i++; */
	/* } */

	/* while (*(s2 + s)) */
	/* { */
	/*	r -= *(s2 + s); */
	/*	s++; */
	/* } */

	return (r);
}
