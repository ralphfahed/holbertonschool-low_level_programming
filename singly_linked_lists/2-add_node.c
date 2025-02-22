#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Computes the length of a string.
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be added to the new node (needs to be duplicated).
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;

	if (!head || !str)
		return (NULL);

	dup_str = strdup(str);
	if (!dup_str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = _strlen(dup_str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

