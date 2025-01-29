#include "lists.h"
#include <stdlib.h>

/**
 * create_new_node - Creates a new node with the provided data.
 * @n: The data to be inserted in the new node.
 *
 * Return: The new node, or NULL if it failed.
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	return (new_node);
}

/**
 * insert_at_index - Inserts a node at a specific index in the list.
 * @h: Pointer to the head of the list.
 * @temp: The node just before the index.
 * @n: The value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_at_index(dlistint_t **h, dlistint_t *temp, int n)
{

(void)h;

dlistint_t *new_node = create_new_node(n);

	if (!new_node)
		return (NULL);

	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a specific position.
 * @h: Pointer to the head of the list.
 * @idx: The index where the new node should be inserted.
 * @n: The data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int i = 0;

	/* If the index is 0, use the function to insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse the list to find the node at the given index */
	while (temp)
	{
		if (i == idx - 1)
			break;
		temp = temp->next;
		i++;
	}

	/* Check if we reached the end or if idx is out of bounds */
	if (temp == NULL)
		return (add_dnodeint_end(h, n));

	/* Insert the new node at the desired position */
return (insert_at_index(h, temp, n));
}
