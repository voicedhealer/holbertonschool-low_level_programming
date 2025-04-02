#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head) /* Check if head is NULL */
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* Duplicate the string and assign it to the new node */
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node); /* Free allocated memory if strdup fails */
		return (NULL);
	}

	/* Calculate the length of the string */
	new_node->len = strlen(str);

	/* Link the new node to the current head of the list */
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}
