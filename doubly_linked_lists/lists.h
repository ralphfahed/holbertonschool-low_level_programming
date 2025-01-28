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
    int n;                  /* Integer data stored in the node */
    struct dlistint_s *prev;/* Pointer to the previous node */
    struct dlistint_s *next;/* Pointer to the next node */
} dlistint_t;

/* Function prototype to print all elements of a dlistint_t list */
size_t print_dlistint(const dlistint_t *h);

/* Function prototype to get the length of the dlistint_t list */
size_t dlistint_len(const dlistint_t *h);

/* Function prototype to add a node at the beginning of a dlistint_t list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif /* LISTS_H */

