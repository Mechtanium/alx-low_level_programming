#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - 
 * @argc: 
 *
 * Description: 
 * Return: 
 */
size_t print_list(list_t *h)
{
	size_t count = 0;
	list_t *ptr = h;

	if (ptr == NULL)
	{
		printf("Error\n");
		return (1);
	}

	do
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}while (ptr != NULL);
	return (count);
}
