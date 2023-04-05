#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 *
 * @head: pointer to pointer of head
 * @index: index of node to delete
 *
 * Return: 1 if succeeded, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	temp = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index && *head != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);
	return (1);
}
