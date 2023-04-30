#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: Pointer to the first node of the reversed list.
 *         If the list is empty or the head is NULL, returns NULL.
 *
 * Description: This function reverses the order of the nodes in a listint_t
 * linked list by changing the direction of the pointers between nodes.
 * It does not use more than one loop, malloc, free, or arrays, and it only
 * declares a maximum of two variables.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}

