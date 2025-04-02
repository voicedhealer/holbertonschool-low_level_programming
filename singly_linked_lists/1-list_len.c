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
    int nb = 0;
    const list_t *curr = h;

    while (curr)
    {
        nb++;
        curr = curr->next;
    }
    
    return(nb);
}
