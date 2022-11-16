#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - Joins strings
 * @s1: First string
 * @s2: Second string
 *
 * Description: Concatenates two strings and adds a termination null byte.
 * Return: A pointer to the new string in memory.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *cat_str;

	while (s1[i] && s1)
		i++;
	while (s2[j] && s2)
		j++;

	i += j;
	i++;
	cat_str = malloc(sizeof(char) * i);

	if (!cat_str)
		return ((char *) NULL);

	i = 0;
	while (s1[i] && s1)
	{
		cat_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && s2)
	{
		cat_str[j + i] = s2[j];
		j++;
	}
	i += j;
	i++;
	cat_str[i] = '\0';

	return (cat_str);
}
