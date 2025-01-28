#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	/* Traverse the list and free each node */
	while (head)
	{
		temp = head;        /* Store current node */
		head = head->next;  /* Move to the next node */
		free(temp->str);    /* Free the duplicated string */
		free(temp);         /* Free the node itself */
	}
}

