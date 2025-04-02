#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int count = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    /* Traverse to the node at the given index */
    while (current != NULL && count < index)
    {
        current = current->next;
        count++;
    }

    /* Check if index is out of bounds */
    if (current == NULL)
        return (-1);

    /* Adjust previous node's next pointer or update head */
    if (current->prev != NULL)
        current->prev->next = current->next;
    else
        *head = current->next;

    /* Adjust next node's prev pointer if it exists */
    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
