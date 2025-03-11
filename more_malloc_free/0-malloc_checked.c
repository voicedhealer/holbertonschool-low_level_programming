#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire avec vérification d'erreur
 * @b: Taille en octets à allouer
 *
 * Return: Pointeur vers la mémoire allouée
 * Exit avec statut 98 si échec
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
    {
		exit(98);
    }
	return (x);
}

