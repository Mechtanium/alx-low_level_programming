#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print num
 *
 * Description: Print 0 to 9.
 * Return: Exit success.
 */
int main(void)
{
	unsigned int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (EXIT_SUCCESS);
}
