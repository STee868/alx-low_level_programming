#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    int i;

    for (i = 0; i < 10; i++)
        add_nodeint(&head, i);

    print_listint(head);
    free_listint_safe(&head);
    printf("%p\n", (void *)head);
    return (0);
}

