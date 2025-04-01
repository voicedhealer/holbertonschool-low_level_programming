#include "lists.h"

/**
 * print_list - Prints all the elements of a singly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *data = h;

	if (h == NULL)
		return (0);

	while (data != NULL)
	{
		printf("%s\n", data->str);
		count++;
		data = data->next;
	}

	return (count);
}
