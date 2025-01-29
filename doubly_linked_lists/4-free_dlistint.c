#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL) /* is head fiya value */
	{
		temp = head->next; /* temp hiye nextnode */
		free(head); /* free the first node =head*/
		head = temp; /* next node btekhod ma7al awalnode */
	}
}

