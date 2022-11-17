#include <stdlib.h>
#include <stdio.h>
/*#include "main.h"*/

/*int _putchar(char c);*/

/**
 * main -  prints the alphabet
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: Exit success
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (EXIT_SUCCESS);
}
