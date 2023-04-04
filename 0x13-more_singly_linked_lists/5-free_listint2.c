#include "lists.h"

/**
 * free_listint2 - free memory of node and set head to NULL
 *
 * @head: pointer to list
*/

void free_listint2(listint_t **head)
{
	listint_t *current;


	while ((current = *head) != NULL)
	{

		*head = (*head)->next;
		free(current);

	}
	*head = NULL;
}

