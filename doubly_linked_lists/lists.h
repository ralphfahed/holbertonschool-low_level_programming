#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer data
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: Node structure for a doubly linked list
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototype for print_dlistint */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
#endif /* LISTS_H */

