#include "lists.h"

/**
 * free_listint - free memory of node
 *
 * @head: pointer to list
*/

void free_listint(listint_t *head)
{
	listint_t *current;


	while (head != NULL)
	{

		current = head;
		free(current->n);
		free(current);
		head = head->next;

	}
}

