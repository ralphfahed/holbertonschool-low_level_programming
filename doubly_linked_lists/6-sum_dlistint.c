#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n), or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* While head is not NULL */
	while (head)
	{
		sum += head->n;	/* Add the data of the current nodelike sum +=n */
		head = head->next;	/* Move to the next node */
	}

	return (sum);
}

