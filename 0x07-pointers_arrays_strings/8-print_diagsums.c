#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: Array to iterate (Must be square)
 * @size: Number of elements in the array
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int n;
	int mj = 0;
	int mn = 0;

	for (i = 0; i < size; i++)
	{
		j = i;
		n = *(a + (((5 * j) + i) * sizeof(int)));
		printf("%d,%d = %d\n", i, j, n);
		mj += n;
		j = size - 1 - i;
		n = *(a + (((5 * j) + i) * sizeof(int)));
		printf("%d,%d = %d\n", i, j, n);
		mn += n;
		printf("%d, %d\n", mj, mn);
	}
	printf("--------------------");
	printf("\n%d, %d\n\n", mj, mn);
}

