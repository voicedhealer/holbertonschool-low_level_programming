#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string using dynamically allocated memory
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
		if (str == NULL)
			return (NULL);

		char *dup;
		size_t len;

		len = strlen(str) + 1;   /* Include space for '\0' */
		dup = malloc(len);

		if (dup == NULL)
			return (NULL);

		strcpy(dup, str);        /* Copy original string into new memory */
		return (dup);
}

