#include "main.h"

/**
 * _strcat - Concatène deux chaînes de caractères
 * @dest: La chaîne de destination
 * @src: La chaîne source à ajouter
 *
 * Description: Cette fonction ajoute la chaîne src à la fin de dest,
 * en écrasant le caractère nul de fin de dest, puis ajoute un nouveau
 * caractère nul.
 *
 * Return: Un pointeur vers la chaîne résultante dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
