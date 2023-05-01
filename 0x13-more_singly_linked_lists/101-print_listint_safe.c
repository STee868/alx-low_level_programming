#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;
	int visited_size = 1024;
	const listint_t **visited = calloc(visited_size, sizeof(listint_t *));
	int index;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		current = head;
		head = head->next;

		/* Check if current node has been visited */
		index = ((unsigned long)current) % visited_size;
		if (visited[index] == current)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free(visited);
			exit(98);
		}
		/* Add current node to visited list */
		visited[index] = current;
	}
	free(visited);
	return (count);
}
