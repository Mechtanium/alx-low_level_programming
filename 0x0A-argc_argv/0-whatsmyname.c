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
int main(int argc, char* argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
