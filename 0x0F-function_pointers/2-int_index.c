#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - finds an integer in a list
 * @array: Interger array pointer
 * @size: Integer list size
 * @cmp: Function pointer to functions with 1 integer argument and returns
 * 0 for an unsuccesful match and anythng else otherwise.
 *
 * Description: Searches a list of integers @array and finds the integer
 * cmp
 * Return: Returns the list index of the first successful integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, d;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		d = cmp(array[i]);

		if (d != 0)
			return (i);
	}

	return (-1);
}
