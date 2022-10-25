#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert list elements
 * @head: Singly linked list head pointer
 * @index: Integer index of node to return
 * @n: data for the new node
 *
 * Description: Inserts a new element with data n at index idx
 * Return: listint_t pointer to element or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	i = 0;
	if (*head == NULL && index > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		if (temp == NULL && index - i > 0)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
