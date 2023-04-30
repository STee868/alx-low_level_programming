#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head node's data (n).
 * @head: Pointer to the head of the list.
 *
 * Return: The head node's data (n).
 *         If the linked list is empty, return 0.
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
