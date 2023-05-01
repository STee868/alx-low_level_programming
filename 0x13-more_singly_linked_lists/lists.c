#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the first node in the list
 * @n: value to be stored in the new node
 *
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, int n)
{
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

/**
 * free_listint_safe - frees a listint_t list and sets the head to NULL
 * @h: pointer to a pointer to the first node in the list
 *
 * Return: the number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *tmp, *current;

    while (*h != NULL){
        count++;
        if (*h <= (*h)->next)
        {
            free(*h);
            *h = NULL;
            break;
        }
        tmp = (*h)->next;
        free(*h);
        *h = tmp;
        current = tmp;
        while (current > *h && current != NULL)
        {
            count++;
            tmp = current->next;
            free(current);
            current = tmp;
        }
    }

    return (count);
}

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the beginning of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                printf("%d\n", h->n);
                h = h->next;
                count++;
        }
        return (count);
}

