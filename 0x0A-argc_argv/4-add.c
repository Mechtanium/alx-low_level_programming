#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <errno.h>

/**
 * main - Add numbers
 * @argc: Argument array size.
 * @argv: Array of arguments
 *
 * Description: Add all the numbers supplied as arguments.
 * Return: 0 (success) and 1 (failure).
 */
int main(int argc, char *argv[])
{
	int i, c;
	long int sum = 0;

	errno = 0;

	for (i = 1; i < argc; i++)
	{
		c = strtol(argv[i], NULL, 10);
		if (errno != 0)
		{
			printf("%s\n", "Error");
			return (EXIT_FAILURE);
		}
		sum += c;
	}
	printf("%ld\n", sum);
	return (0);
}
