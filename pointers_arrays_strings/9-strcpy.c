#include "main.h"

/**
 * _strcpy - Copie une chaîne source dans une chaîne de destination
 * @dest: Pointeur vers la chaîne de destination
 * @src: Pointeur vers la chaîne source
 *
 * Description: Cette fonction copie la chaîne pointée par src, y compris
 * le caractère nul de terminaison ('\0'), vers le buffer pointé par dest.
 *
 * Return: Le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
