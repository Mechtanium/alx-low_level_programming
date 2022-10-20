#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print the elements of a list.
 * @h: head pointer
 *
 * Description: Prints all the elements of a list in order.
 * Return: The size of the list.
 */
size_t print_list(list_t *h)
{
	size_t count = 0;
	list_t *ptr = h;

	/*if (ptr == NULL)*/
	/*{*/
	/*	printf("Error\n");*/
	/*	return (1);*/
	/*}*/

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
