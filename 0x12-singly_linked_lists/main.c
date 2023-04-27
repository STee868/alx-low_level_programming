#include "lists.h"

int main(void)
{
        list_t *head;

        /* Create the linked list */
        head = add_node("Holberton", 9);
        add_node("School", 6);
        add_node("Full", 4);
        add_node("Stack", 5);

        /* Print the linked list */
        print_list(head);

        /* Free the linked list */
        free_list(head);

        return (0);
}

