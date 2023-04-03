#include "lists.h"

/**
 * add_nodeint_end - add new node to the end
 *
 * @head: pointer to head of list
 * @n: number of node
 *
 * Return: pointer to new head node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}


	return (*head);
}

