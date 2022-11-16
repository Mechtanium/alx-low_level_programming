#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - Creates grid
 * @width: Width of grid
 * @height: Height of grid
 *
 * Description: Creates a two dimensional double pointer int array
 * Return: Pointer to the created array of arrays.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **d_arr;
	int *temp;

	if (width < 1 || height < 1)
		return (NULL);

	d_arr = malloc(sizeof(int *) * height);

	if (!d_arr)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		temp = malloc(sizeof(int) * width);

		if (!temp)
		{
			j = 0;
			while (d_arr[j])
			{
				free(d_arr[j]);
				j++;
			}
			free(d_arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			temp[j] = 0;

		d_arr[i] = temp;
	}

	return (d_arr);
}

