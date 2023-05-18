#include "lists.h"

/**
 * add_dnodeint_end - add new node at end
 * @head: head of list
 * @n: data of new node
 *
 * Return: address of new element or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	else
		*head = new_node;
	new_node->prev = h;
	return (new_node);
}
