#include <stdlib.h>
#include <stdio.h>
/*#include "main.h"*/

/*int _putchar(char c);*/

/**
 * main -  prints the numbers
 *
 * Description: prints the numbers, followed by a new line.
 * Return: Exit success
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (EXIT_SUCCESS);
}
