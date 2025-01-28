#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;  /* Count of nodes */

    /* Traverse the list using the given pointer h */
    while (h != NULL)   /* Until we reach the last node */
    {
        printf("%d\n", h->n);  /* Print the value of the current node */
        h = h->next;  /* Move to the next node */
        count++;  /* Increment the node count */
    }

    return count;  /* Return the total number of nodes */
}

