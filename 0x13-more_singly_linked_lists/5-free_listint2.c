#include "lists.h"

/**
 * free_listint2 - free memory of node and set head to NULL
 *
 * @head: pointer to list
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;


	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

	}
	*head = NULL;
}

