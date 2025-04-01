#include "lists.h"
#include <stdio.h>

/**
 * list length - counts the number of elemnets in linked list
 * @h: Pointer to the head of the list
 *
 * Return: The numbers of nodes in the list
 */
size_t list_len(const list_t *h)
{
    size_t nb = 0;
    const list_t *current_node = h;

    while (current_node != NULL)
    {
        nb++;
        current_node = current_node->next;
    }
    
    return nb;
}
