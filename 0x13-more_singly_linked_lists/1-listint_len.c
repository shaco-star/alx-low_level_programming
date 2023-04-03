#include "lists.h"

/**
 * listint_len - print number of elements in list
 *
 * @h: list
 *
 * Return: number of elements or 0 if fails
*/


size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
