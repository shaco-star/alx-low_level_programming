#include "lists.h"

/**
 * sum_dlistint - sum of elements of list
 * @head: pointer to head of linked list
 *
 * Return: return sum or 0 if list in empty
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);

}
