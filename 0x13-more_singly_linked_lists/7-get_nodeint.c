#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of linked list
 *
 * @head: head of node
 * @index: index of node we want
 *
 * Return: return node at @index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
		if (i == (index - 1))
			return (head);

	}
	return (NULL);
}
