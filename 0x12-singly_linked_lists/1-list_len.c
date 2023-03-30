#include "lists.h"

/**
 * list_len - print elements of a list
 *
 * @h: pointer to list
 *
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t n = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{

		h = h->next;
		n++;

	}
	return (n);
}

