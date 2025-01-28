#include <stdlib.h>
#include "lists.h"

/**
 * create_node - Creates a new node.
 * @n: The integer to be added to the new node.
 *
 * Return: A pointer to the new node, or NULL if it failed.
 */
dlistint_t *create_node(const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation failed */

	/* Initialize the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node); /* Return the newly created node */
}

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: The integer to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Create the new node */
	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL); /* Return NULL if node creation failed */

	/* If the list is not empty, update the previous head's previous pointer */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Set the new node as the new head of the list */
	new_node->next = *head;
	*head = new_node;

	return (new_node); /* Return the new node */
}

