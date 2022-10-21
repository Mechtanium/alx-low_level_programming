#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a new list element at the end.
 * @head: Head pointer
 * @str: New element data
 *
 * Description: While leaving the head pointer at the beginning of the list
 * adds new elements to the end of the list.
 * Return: The address of the newest element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp_ptr = NULL;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if ((*head) == NULL)
		(*head) = new;
	else
	{
		temp_ptr = (*head);
		while (temp_ptr->next != NULL)
			temp_ptr = temp_ptr->next;

		temp_ptr->next = new;
	}

	return (new);
}
