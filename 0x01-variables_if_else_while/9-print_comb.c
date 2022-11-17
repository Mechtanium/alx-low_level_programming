#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Prnnt random stuff
 *
 * Description: Print random stuff
 * Return: Exit success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\0');

	return (EXIT_SUCCESS);
}

