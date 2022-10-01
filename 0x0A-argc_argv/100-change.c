#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Count coins
 * @argc: Argument list array size.
 * @argv: Argument list array
 *
 * Description: For a given amount calculate the mnimum number of coins that
 * would be required to make change.
 * Return: 0 (success) and 1 (failure).
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (EXIT_FAILURE);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (cents)
		{
			coins++;
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
		}
		printf("%d\n", coins);
	}
	return (EXIT_SUCCESS);
}
