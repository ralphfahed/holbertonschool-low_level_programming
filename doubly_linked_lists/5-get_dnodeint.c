#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node, starting from 0.
 *
 * Return: The nth node or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;		/* Index counter */

	/* Traverse the list until the index is reached or the list ends */
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);		/* Return the node if index matches */
		}
		head = head->next;		/* Move to the next node */
		i++;				/* Increment the index counter */
	}

	return (NULL);		/* Return NULL if the node at index doesn't exist */
}

