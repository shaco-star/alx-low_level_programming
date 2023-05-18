#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: head of linked list
 * @index: index that we want to delete node at it
 *
 * Return: 1 if secceeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp != NULL)
	{
		if (temp->prev != NULL)
			temp->prev->next = temp->next;
		else
			*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
