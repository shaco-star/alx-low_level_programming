#include "lists.h"

/**
 * pop_listint - delete head node
 *
 * @head: head node
 *
 * Return: number of first node
*/

int pop_listint(listint_t **head)
{
	int node;
	listint_t *temp, *next_node;

	if (*head == NULL)
		return (0);

	temp = *head;
	next_node = temp->next;
	node = temp->n;
	free(temp);

	*head = next;

	return (node);
}
