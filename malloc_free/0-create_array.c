#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Crée et initialise un tableau de caractères
 * @size: Taille du tableau
 * @c: Caractère d'initialisation
 *
 * Return: Pointeur vers le tableau alloué, NULL si échec ou size = 0
 */
char *create_array(unsigned int size, char c)
{
		if (size == 0)
			return (NULL);

		char *array;
		unsigned int i;

		array = malloc(size * sizeof(char));
		if (array == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			array[i] = c;

		return (array);
}

