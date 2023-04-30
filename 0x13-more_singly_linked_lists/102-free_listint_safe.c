#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *head;
	listint_t *node;
	int i;

	head = NULL;
	for (i = 0; i < 10; i++)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
		{
			printf("Error: Can't allocate memory for node\n");
			free_listint_safe(&head);
			return (1);
		}
		node->n = i;
		node->next = head;
		head = node;
	}
	printf("Number of nodes in the list: %d\n", free_listint_safe(&head));

	return (0);
}
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
