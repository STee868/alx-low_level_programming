#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: A pointer to a pointer to the head node of the list.
* @str: The string to be stored in the new node.
*
* Return: If memory allocation fails or head is NULL, NULL.
*         Otherwise - a pointer to the new node.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);

		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}
