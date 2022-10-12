#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - iterates through a list
 * @array: Integer list pointer
 * @size: Size of list as size_t
 * @action: pointer to action function
 *
 * Description: Iterate through a list of integers performing the action on
 * each item.
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int s = (int) size, i;

	if (array == NULL)
		return;

	for (i = 0; i < s; i++)
	{
		action(array[i]);
	}
}
