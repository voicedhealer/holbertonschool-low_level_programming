#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i;

    if (!h) /* Check if h is NULL */
        return (NULL);

    if (idx == 0) /* Insert at beginning */
        return (add_dnodeint(h, n));

    current = *h;
    for (i = 0; current && i < idx - 1; i++)
        current = current->next;

    if (!current) /* Index out of bounds */
        return (NULL);

    /* Create new node */
    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = current->next;
    new_node->prev = current;

    if (current->next) /* Update next node's prev if exists */
        current->next->prev = new_node;

    current->next = new_node;

    return (new_node);
}
