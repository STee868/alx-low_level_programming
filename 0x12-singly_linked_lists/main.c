#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main(int argc, char *argv[]) {
    list_t *head = NULL;

    // Add some nodes to the beginning of the list
    add_node(&head, "Hello");
    add_node(&head, "world");
    add_node(&head, "how");
    add_node(&head, "are");
    add_node(&head, "you");

    // Add a node to the end of the list
    add_node_end(&head, "doing?");

    // Print the list and get the number of nodes
    size_t num_nodes = print_list(head);
    printf("Number of nodes: %zu\n", num_nodes);

    // Get the length of the list using the list_len function
    size_t list_length = list_len(head);
    printf("Length of list: %zu\n", list_length);

    // Free the list
    free_list(head);
    return 0;
}

