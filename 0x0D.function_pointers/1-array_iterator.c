#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: A pointer to the function to be executed on each element
 *
 * Description: This function applies the given action to each element
 * of the array if both array and action are not NULL.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
)