root@1ee2294a75b84a1bb6b836762017aa2b-2377118072:/holbertonschool-low_level_programming/singly_linked_lists# cat 0-print_list.c 
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
