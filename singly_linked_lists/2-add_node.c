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
    list_t *new_node;
    unsigned int len = 0;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);
    new_node->str = strdup(str);
    if (new_node->str == NULL)
        return (NULL);

    /* Manually calculate the length of the string */
    while (str[len] != '\0')
        len++;

    new_node->len = len;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list to be printed.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        count++;
    }

    return (count);
}

