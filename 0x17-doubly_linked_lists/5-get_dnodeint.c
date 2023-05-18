#include "lists.h"

/**
 * get_dnodeint_at_index - get node at an index
 * @head: pointer to head of linked list
 * @index: index of node we want to get
 *
 * Return: return node at @index or NULL if not found
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);

}
