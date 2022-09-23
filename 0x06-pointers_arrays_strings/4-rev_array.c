#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses array order
 * @a: Array to be reversed
 * @n: Number of elements in the array
 *
 * Description: Add question here
 * Return: Returns nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, a_rev[100];

	for (i = 0; i < n; i++)
	{
		a_rev[i] = a[n - 1 - i];
	}

	for (j = 0; j < n; j++)
	{
		a[j] = a_rev[j];
	}
}

