#include "lists.h"
#include <stddef.h>

/**
 * list_len - A function that calculate the length of a list
 *
 * @h: The beginning of the list
 *
 * Return: The number of nodes in the list
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
