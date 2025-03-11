#include <stdlib.h>
/**
 * calloc - Alloue de la mémoire et l'initialise à zéro
 * @nmemb: Nombre d'éléments
 * @size: Taille en octets de chaque élément
 *  
 * return: Pointeur vers la mémoire allouée
 */ 
void *_calloc(unsigned int nmemb, unsigned int size) {
    void *ptr;
    unsigned int i;
    char *casted_ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);

    casted_ptr = ptr;
    for (i = 0; i < nmemb * size; i++)
        casted_ptr[i] = 0;

    return (ptr);
}
