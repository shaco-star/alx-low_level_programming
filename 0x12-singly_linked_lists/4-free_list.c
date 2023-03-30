#include "list.h"

/**
 * free_list - free memory of node
 *
 * @head: pointer to list
*/

void free_list(list_t *head)
{
	list_t *current;


	while (head != NULL)
	{

		current = head;
		free(current->str);
		free(current);
		head = head->next;

	}
}

