#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverse a singly linked list.
 * @head: Pointer to list head pointer.
 *
 * Description: Reverses a listint_t linked list.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *temp2 = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = temp2;
		temp2 = *head;

		if (*head != NULL)
		{
			*head = (*head)->next;
			temp2->next = temp;
		}
	}

	*head = (temp2 != NULL) ? temp2 : temp;
	temp = NULL;
	temp2 = NULL;

	return (*head);
}
