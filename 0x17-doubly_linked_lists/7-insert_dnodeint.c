#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at given index
 *
 * @h: pointer to head of node
 * @idx: index that we will add new node at
 * @n: data of new node
 *
 * Return: address of new added node or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	if (temp != NULL)
	{
		new_node->prev = temp->prev;
		new_node->next = temp;
		temp->prev->next = new_node;
		temp->prev = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
