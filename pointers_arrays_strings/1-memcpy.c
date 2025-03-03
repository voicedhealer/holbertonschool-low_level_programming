#include "main.h"

/**
 * _memcpy - Copie une zone mémoire
 * @dest: Pointeur vers la destination
 * @src: Pointeur vers la source
 * @n: Nombre d'octets à copier
 *
 * Return: Pointeur vers la destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
