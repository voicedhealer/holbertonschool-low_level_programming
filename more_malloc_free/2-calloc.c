#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - Alloue de la mémoire et l'initialise à zéro
 * @nmemb: Nombre d'éléments
 * @size: Taille en octets de chaque élément
 * Return: Pointeur vers la mémoire allouée, NULL en cas d'échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i, total_size;
    char *casted_ptr;

    /* Gestion des cas particuliers */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Vérification débordement mémoire */
    if (size && nmemb > UINT_MAX / size)
        return (NULL);

    total_size = nmemb * size;

    /* Allocation mémoire */
    ptr = malloc(total_size);
    if (ptr == NULL)
        return (NULL);

    /* Initialisation à zéro */
    casted_ptr = ptr;
    for (i = 0; i < total_size; i++)
        casted_ptr[i] = 0;

    return (ptr);
}
