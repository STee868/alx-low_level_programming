#include "lists.h"

int main(void)
{
    list_t *head = NULL;

    add_node(&head, "Hello");
    add_node(&head, "world");
    add_node(&head, "!");
    print_list(head);
    free_list(head);
    return (0);
}

