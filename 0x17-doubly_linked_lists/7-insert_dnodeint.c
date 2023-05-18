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
	dlistint_t *new_node;
	dlistint_t *head;

	if (h == NULL)
		return (NULL);
	new_node = malloc
}
