#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Counts the elements in a linked list.
 * @head: head pointer pointer
 * @str: String data for the next element
 *
 * Description: Adds new elements to the list.
 * Return: The pointer to the last element in the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);

	(*head) = new;

	return (*head);
}

