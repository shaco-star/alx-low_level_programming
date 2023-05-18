#include "lists.h"

/**
 * dlistint_len - print doubly linked list
 *
 * @h: head of list
 * Return: number of nodes in list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t numOfNodes;

	numOfNodes = 0;
	if (h == NULL)
		return (numOfNodes);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		numOfNodes++;
		h = h->next;
	}

	return (numOfNodes);
}
