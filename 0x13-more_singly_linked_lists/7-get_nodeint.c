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

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;


	return (head);
}
