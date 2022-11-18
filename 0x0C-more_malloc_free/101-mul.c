#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - 
 * @argc: 
 *
 * Description: 
 * Return: 
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "Error\n", 6);
		exit(98);
	}
	
	return (EXIT_SUCCESS);
}
