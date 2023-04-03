#include "lists.h"

/**
 * add_nodeint - add node at beginning of list
 *
 * @head: point to header node
 * @n: number of node
 *
 * Return: pointer to head node or NULL if fails
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;

	node->n = n;
	*head = node;

	return (*head);
}
