#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n"); /* Print (nil) if str is NULL */
		else
			printf("[%u] %s\n", h->len, h->str); /* Print the length and string */

		h = h->next; /* Move to the next node */
		count++; /* Increment the node counter */
	}

	return (count);
}

