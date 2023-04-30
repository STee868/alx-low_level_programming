#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head node of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current)
	{
		count++;
		tmp = current;
		current = current->next;
		free(tmp);

		if (current >= tmp)
		{
			*h = NULL;
			exit(98);
		}
	}
	*h = NULL;

	return (count);
}
