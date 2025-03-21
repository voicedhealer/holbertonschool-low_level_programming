#include "main.h"

/**
 * _strncat - Concatène deux chaînes en utilisant au plus n octets de src
 * @dest: La chaîne de destination
 * @src: La chaîne source à ajouter
 * @n: Le nombre maximum d'octets à utiliser depuis src
 *
 * Return: Un pointeur vers la chaîne résultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
