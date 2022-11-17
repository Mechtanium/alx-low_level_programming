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
	char x = '0';
	int y = 16;

	while (x <= '9' && y != 0)
	{
		putchar(x);
		x++;
		y--;
	}

	x = 'a';
	while (x <= 'z' && y != 0)
	{
		putchar(x);
		x++;
		y--;
	}

	putchar('\n');
	return (EXIT_SUCCESS);
}
