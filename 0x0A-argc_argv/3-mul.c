#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Short statement of function purpose
 * @argc: Info on argc.
 * @argv: Array of inputs.
 *
 * Description: Describe in detail how the function works here
 * Return: 0 (success) and 1 (failure).
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (EXIT_FAILURE);
	}
	printf("%d\n", (atoi((*argv + 1)) * atoi((*argv + 2))));
	return (EXIT_SUCCESS);
}
