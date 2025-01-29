#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if the node was successfully deleted, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	/* If the list is empty, return -1 */
	if (temp == NULL)
		return (-1);

	/* If the index is 0, delete the head node */
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node at the given index */
	while (temp)
	{
		if (i == index)
			break;
		temp = temp->next;
		i++;
	}

	/* If we reached the end of the list without finding the index, return -1 */
	if (temp == NULL)
		return (-1);

	/* Adjust the previous and next pointers of the neighboring nodes */
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	/* Free the node */
	free(temp);

	return (1);
}

