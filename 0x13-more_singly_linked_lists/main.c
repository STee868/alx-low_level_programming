#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    listint_t *new_node = NULL;
    int sum, deleted, popped;
    
    /* add node at the beginning */
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 5);
    print_listint(head); /* Output: 5 4 3 2 1 */
    
    /* add node at the end */
    new_node = add_nodeint_end(&head, 6);
    if (new_node != NULL)
        printf("New node added at the end: %d\n", new_node->n); /* Output: New node added at the end: 6 */
    
    /* get node at index */
    printf("Node at index 3: %d\n", get_nodeint_at_index(head, 3)->n); /* Output: Node at index 3: 2 */
    
    /* insert node at index */
    new_node = insert_nodeint_at_index(&head, 2, 9);
    if (new_node != NULL)
        printf("New node added at index 2: %d\n", new_node->n); /* Output: New node added at index 2: 9 */
    print_listint(head); /* Output: 5 4 9 3 2 1 6 */
    
    /* delete node at index */
    deleted = delete_nodeint_at_index(&head, 4);
    if (deleted == 1)
        printf("Node at index 4 deleted\n"); /* Output: Node at index 4 deleted */
    print_listint(head); /* Output: 5 4 9 3 1 6 */
    
    /* pop node at beginning */
    popped = pop_listint(&head);
    if (popped != 0)
        printf("Node at the beginning popped: %d\n", popped); /* Output: Node at the beginning popped: 5 */
    print_listint(head); /* Output: 4 9 3 1 6 */
    
    /* get sum of all nodes */
    sum = sum_listint(head);
    printf("Sum of all nodes: %d\n", sum); /* Output: Sum of all nodes: 23 */
    
    /* reverse list */
    head = reverse_listint(&head);
    print_listint(head); /* Output: 6 1 3 9 4 */
    
    /* find loop in list */
    add_nodeint(&head, 7);
    head->next->next->next->next->next = head->next->next;
    printf("Node where loop starts: %p\n", (void *)find_listint_loop(head)); /* Output: Node where loop starts: 0xADDRESS */
    
    /* free list */
    free_listint2(&head);
    return (0);
}

