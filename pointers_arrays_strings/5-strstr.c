#include <stdio.h>
#include <string.h>

/**
 *strstr - parcourt la chaine haystack 
 *retourne un pointeur vers le debut de cette occurrence 
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
	{
	if (haystack == needle)
		return (haystack);
	haystack++;
	}

	if (needle == (void *)0)
		return (needle);

	return (NULL);
}
