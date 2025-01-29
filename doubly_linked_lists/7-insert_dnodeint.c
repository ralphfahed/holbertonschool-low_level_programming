#include <stdlib.h>
#include "lists.h"

/**
 * create_new_node - Creates a new node with the given data
 * @n: The data to store in the new node
 *
 * Return: Pointer to the newly created node,or NULL if memory allocation fail
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	return (new_node);
}

/**
 * get_node_at_index - Returns the node at the given index in the list
 * @temp: The head of the list to search from
 * @index: The index of the node to find
 *
 * Return: Pointer to the node at the given index, or NULL
 */
dlistint_t *get_node_at_index(dlistint_t *temp, int index)
{
	int current_index = 0;

	while (temp != NULL && current_index < index)
	{
		temp = temp->next;
		current_index++;
	}

	if (temp == NULL || current_index != index)
	{
		return (NULL);
	}

	return (temp);
}

/**
 * insert_node_after - Inserts a new node after a given node
 * @temp: The node to insert after
 * @new_node: The new node to insert
 *
 * Return: Pointer to the new node that was inserted
 */
dlistint_t *insert_node_after(dlistint_t *temp, dlistint_t *new_node)
{
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next)
	{
		temp->next->prev = new_node;
	}

	temp->next = new_node;

	return (new_node);
}

/**
 * insert_at_index - Inserts a new node at a given index in the list
 * @h: Double pointer to the head of the list
 * @temp: The current node to start the search from
 * @n: The data to insert at the specified index
 *
 * Return: Pointer to the new node, or NULL if insertion fails
 */
dlistint_t *insert_at_index(dlistint_t **h, dlistint_t *temp, int n)
{
	dlistint_t *new_node;

	/* Return NULL if the list is empty or index is out of range */
	if (temp == NULL)
	{
		return (NULL);
	}

	/* Get the node at the specified index */
	temp = get_node_at_index(temp, n);
	if (temp == NULL)
	{
		return (NULL);
	}

	/* Create a new node */
	new_node = create_new_node(n);
	if (!new_node)
	{
		return (NULL);
	}

	/* Insert the new node at the desired position */
	return (insert_node_after(temp, new_node));
}

