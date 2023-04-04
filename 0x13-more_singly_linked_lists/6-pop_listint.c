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

	next_node = head->next;
	node = head->n;
	free(head);
	*head = next;

	return (node);
}
