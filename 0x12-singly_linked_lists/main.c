#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
    list_t *head = NULL;
    list_t *new_node;
    list_t *end_node;
    size_t n;

    printf("Number of nodes: %lu\n", list_len(head));

    new_node = add_node(&head, "Holberton");
    if (new_node == NULL)
    {
        printf("Failed to add new node\n");
        return (1);
    }

    end_node = add_node_end(&head, "School");
    if (end_node == NULL)
    {
        printf("Failed to add end node\n");
        return (1);
    }

    n = list_len(head);
    printf("Number of nodes: %lu\n", n);

    free_list(head);

    return (0);
}

