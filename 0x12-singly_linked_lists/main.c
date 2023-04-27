#include "lists.h"

int main(void)
{
    list_t *head = NULL;

    add_node_end(&head, "World");
    add_node_end(&head, "Hello");

    print_list(head);

    free_list(head);

    return (0);
}

