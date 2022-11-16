#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Copies strings
 * @str: Old string
 *
 * Description: Copies a strings.
 * Return: Pointer to new string memory.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *new_str;

	if (!str)
		return ((char *) NULL);

	while (str[i])
		i++;

	i++;
	new_str = malloc(sizeof(char) * i);

	if (!new_str)
		return ((char *) NULL);

	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}
