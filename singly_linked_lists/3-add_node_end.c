#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Computes the length of a string.
 * @str: Pointer to the string whose length is to be calculated.
 *
 * Return: Length of the string (number of characters before '\0').
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	/* Loop through the string until the null terminator is reached */
	while (str[len])
		len++;
	return (len);
}

/**
 * create_node - Creates a new node with a duplicated string.
 * @str: The string to duplicate and add to the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */
list_t *create_node(const char *str)
{
	list_t *new_node;
	char *dup_str;

	/* Duplicate the string */
	dup_str = strdup(str);
	if (!dup_str)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(dup_str);
		return (NULL);
	}

	/* Initialize the new node */
	new_node->str = dup_str;
	new_node->len = _strlen(dup_str);
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - Adds a new node at the end of a list_t linked list.
 * @head: Double pointer to the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!head || !str)
		return (NULL);

	/* Create the new node */
	new_node = create_node(str);
	if (!new_node)
		return (NULL);

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the last node */
	temp = *head;
	while (temp->next)
		temp = temp->next;

	/* Link the last node to the new node */
	temp->next = new_node;

	return (new_node);
}

