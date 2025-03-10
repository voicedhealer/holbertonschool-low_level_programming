#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory block
 * @s1: First string (or NULL)
 * @s2: Second string (or NULL)
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";

		size_t len1, len2;
		char *result;

		len1 = strlen(s1);
		len2 = strlen(s2);

		result = malloc(len1 + len2 + 1);

		if (result == NULL)
			return (NULL);  /* Allocation failed */

		memcpy(result, s1, len1);               /* Copy first part */
		memcpy(result + len1, s2, len2 + 1);    /* Copy second part including '\0' */

		return (result);
}
