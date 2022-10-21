#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - delete list.
 * @head: Head pointer
 *
 * Description: Free all elements in a list_t
 * Return: void (Nothing)
 */
void free_list(list_t *head)
{
	list_t *temp_ptr = NULL;

	while (head)
	{
		temp_ptr = head;
		head = head->next;
		free(temp_ptr->str);
		free(temp_ptr);
	}
}
