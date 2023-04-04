#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given index
 *
 * @head: head of node
 * @idx: index to put new node
 * @n: number of node
 *
 * Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int i;

	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
