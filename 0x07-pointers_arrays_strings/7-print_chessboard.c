#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Entry point
 * @arr: Target array to be enumerated
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
void print_chessboard(char arr[8][8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}
