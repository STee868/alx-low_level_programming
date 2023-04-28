#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last_node;
    size_t str_len = 0;

    /* Get the length of the string */
    while (str && str[str_len])
        str_len++;

    /* Create the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    new_node->len = str_len;
    new_node->next = NULL;

    /* If list is empty, make new node the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Find the last node in the list */
    last_node = *head;
    while (last_node->next != NULL)
        last_node = last_node->next;

    /* Add the new node to the end */
    last_node->next = new_node;

    return (new_node);
}

