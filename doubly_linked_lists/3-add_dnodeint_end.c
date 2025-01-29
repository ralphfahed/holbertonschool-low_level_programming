#include <stdlib.h>
#include "lists.h"

/**
 * create_dnode - Creates a new dlistint_t node.
 * @n: The integer value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *create_dnode(const int n)
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
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = create_dnode(n);
	if (!new_node)
		return (NULL);

	if (*head == NULL)  /* If list is empty, make new node the head */
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}

