#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (head == NULL) /* Check if head is NULL */
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string and assign it to the new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); /* Free allocated memory if strdup fails */
		return (NULL);
	}

	new_node->len = strlen(str); /* Calculate the length of the string */
	new_node->next = NULL; /* The new node will be the last one */

	if (*head == NULL) /* If the list is empty, make new_node the head */
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL) /* Traverse to the end of the list */
			temp = temp->next;
		temp->next = new_node; /* Link the last node to the new node */
	}

	return (new_node);
}
