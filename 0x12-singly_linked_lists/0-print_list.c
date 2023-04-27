#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Holberton");
	add_node_end(&head, "School");
	add_node_end(&head, "98 Battery St.");
	print_list(head);

	return (0);
}
