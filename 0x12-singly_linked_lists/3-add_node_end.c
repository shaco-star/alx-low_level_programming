#include "lists.h"

/**
 * add_node_end - add new node to the end
 *
 * @head: pointer to head of list
 * @str: string
 *
 * Return: pointer to new head node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	for (; str[str_len] != '\0'; str_len++)
		;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = str_len;
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

