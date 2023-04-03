#include "lists.h"

/**
 * print_listint - print all elements of list
 *
 * @h: list
 *
 * Return: number of elements or 0 if fails
*/


size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	printf("%d\n", h->n);
	return (nodeCount);
}
