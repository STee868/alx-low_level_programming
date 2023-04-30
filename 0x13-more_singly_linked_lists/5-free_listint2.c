#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
