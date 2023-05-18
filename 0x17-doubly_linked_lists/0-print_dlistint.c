#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 *
 * @h: head of list
 * Return: number of nodes in list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t numOfNodes;

	numOfNodes = 0;
	if (h == NULL)
		return (numOfNodes);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		numOfNodes++;
		h = h->next;
	}

	return (numOfNodes);
}
