#include "lists.h"

/**
 * add_node - add new node to the beginning
 *
 * @head: pointer to head of list
 * @str: string
 *
 * Return: pointer to new head node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	for (; str[str_len] != '\0'; str_len++)
		;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;

	node->str = strdup(str);
	node->len = str_len;
	*head = node;



	return (*head);
}

