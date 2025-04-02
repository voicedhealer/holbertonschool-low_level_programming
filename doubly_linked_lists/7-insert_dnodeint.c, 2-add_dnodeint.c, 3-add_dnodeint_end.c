#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - A function to create a node at n position
 *
 * @h: The beginning of the list
 * @idx: The index at which we desire to create a node
 * @n: The data to insert in the node
 *
 * Return: The address of the new node (or NULL if failed)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (; tmp && i < idx - 1; i++)
		tmp = tmp->next;

	if (!tmp)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;

	if (tmp->next)
		tmp->next->prev = new_node;

	tmp->next = new_node;

	return (new_node);
}
