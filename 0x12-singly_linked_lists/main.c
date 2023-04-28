#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
    /* Test list_len function */
    list_t *head = NULL;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error: unable to allocate memory\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("Number of elements in the list: %lu\n", n);

    /* Test add_node function */
    list_t *new_node;
    new_node = add_node(&head, "New Node");
    if (new_node == NULL)
    {
        printf("Error: unable to add new node\n");
        return (1);
    }
    printf("Added new node with value '%s'\n", new_node->str);

    /* Test add_node_end function */
    list_t *end_node;
    end_node = add_node_end(&head, "End Node");
    if (end_node == NULL)
    {
        printf("Error: unable to add new node at end\n");
        return (1);
    }
    printf("Added new node at end with value '%s'\n", end_node->str);

    /* Test free_list function */
    free_list(head);
    printf("Freed memory\n");

    return (0);
}

