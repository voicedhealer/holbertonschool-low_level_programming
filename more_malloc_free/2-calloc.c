#include <stdlib.h>

/**
 * _calloc - Alloue de la mémoire et l'initialise à zéro
 * @nmemb: Nombre d'éléments
 * @size: Taille en octets de chaque élément
 *  
 * Return: Pointeur vers la mémoire allouée, NULL en cas d'échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *casted_ptr;

	/* Gestion des cas speciaux */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Vérification débordement (comme calloc standard) */
	if (size && nmemb > (unsigned int)-1 / size)
		return (NULL);

	/* Allocation mémoire */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Initialisation à zéro */
	casted_ptr = ptr;
	for (i = 0; i < nmemb * size; i++)
		casted_ptr[i] = 0;

	return (ptr);
}

