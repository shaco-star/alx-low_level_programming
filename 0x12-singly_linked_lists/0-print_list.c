#include "lists.h"

/**
 * print_list - print elements of a list
 *
 * @h: pointer to list
 *
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t len = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;

	}
	printf("[%d] %s\n", h->len, h->str);
	return (len);
}

