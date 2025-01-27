#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer to the first node of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node; /*we create a new node*/

    new_node = malloc(sizeof(list_t)); /*save memory for the newnode*/
    if (new_node == NULL) /*if no memory*/
    {
        return (NULL);
    }

    new_node->str = strdup(str);/*copy str*/
    if (new_node->str == NULL)/*if the str is null free the memory*/
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(new_node->str);/*store the len of the str*/

    new_node->next = *head;/*move the next*/
    *head = new_node;/*put it the first*/

    return (new_node);
}

