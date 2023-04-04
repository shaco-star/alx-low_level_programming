#include "lists.h"

/**
 * sum_listint - return nth node of linked list
 *
 * @head: head of node
 *
 * Return: return node at @index
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);


	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
