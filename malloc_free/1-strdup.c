#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Duplicates a string using dynamically allocated memory
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
		char *dup;
		size_t len;

		if (str == NULL)
			return (NULL);

		len = strlen(str) + 1;   /* Include space for '\0' */
		dup = malloc(len);

		if (dup == NULL)
			return (NULL);

		strcpy(dup, str);
		return (dup);
}
