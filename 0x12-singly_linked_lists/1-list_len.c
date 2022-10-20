#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Counts the elements in a linked list.
 * @h: head pointer
 *
 * Description: Counts all the elements of a list in order.
 * Return: The size of the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	/*if (ptr == NULL)*/
	/*{*/
	/*	printf("Error\n");*/
	/*	return (1);*/
	/*}*/

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}

