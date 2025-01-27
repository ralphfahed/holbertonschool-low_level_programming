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
    list_t *temp;
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

    if(*head == NULL){
	    *head=new_node;
	    return;
    }
    
    temp = *head;
    while (temp->next != NULL){
	    temp = temp->next;
    }
    temp->next=new_node;

    return (new_node);
}
