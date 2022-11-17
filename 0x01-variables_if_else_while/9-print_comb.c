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
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (EXIT_SUCCESS);
}

