#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints elements of a 
 * linked list with specific formatting
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;
    const list_t *current_node = h;

    while (current_node != NULL)
    {
        if (current_node->str)
            printf("[%u] %s\n", current_node->len, current_node->str);
        else
            printf("[0] (nil)\n");
        
        node_count++;
        current_node = current_node->next;
    }
    return (node_count);
}
