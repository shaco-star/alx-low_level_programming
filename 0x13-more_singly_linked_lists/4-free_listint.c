#include "lists.h"

/**
 * free_listint - free memory of node
 *
 * @head: pointer to list
*/

void free_listint(listint_t *head)
{
	listint_t *current;


	while ((current = head) != NULL)
	{

		head = head->next;
		free(current);

	}
}

