#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/* structure for singly-linked list */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* function prototypes */
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, int n);
size_t free_listint_safe(listint_t **h);

#endif /* LISTS_H */

