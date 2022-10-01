#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Print function name.
 * @argc: Variable count
 * @argv: Variable pointer array
 *
 * Description: Prints the name of the program that called this code.
 * Return: EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (EXIT_SUCCESS);
}
