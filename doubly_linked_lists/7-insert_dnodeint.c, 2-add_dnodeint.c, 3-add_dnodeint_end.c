#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - Adds a node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Value for the new node.
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL)
        (*head)->prev = new_node;

    *head = new_node;
    return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *current, *new_node;
    unsigned int count = 0;

    if (h == NULL)
        return (NULL);

    /* Handle insertion at the beginning */
    if (idx == 0)
        return (add_dnodeint(h, n));

    /* Traverse to the node before the desired index */
    current = *h;
    while (current != NULL && count < idx - 1)
    {
        current = current->next;
        count++;
    }

    /* Check if index is out of bounds */
    if (current == NULL)
        return (NULL);

    /* Create and link the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = current;
    new_node->next = current->next;

    /* Update the next node's prev pointer if it exists */
    if (current->next != NULL)
        current->next->prev = new_node;

    current->next = new_node;
    return (new_node);
}
