#include "lists.h"

/**
 * free_listint2 - free memory of node
 *
 * @head: pointer to list
*/

void free_listint2(listint_t **head)
{
	listint_t *current;


	while (head != NULL)
	{

		current = head;
		free(current->str);
		free(current);
		head = head->next;
	}
	*head = NULL;
}

