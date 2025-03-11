#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers de min à max (inclus)
 * @min: Valeur minimale (incluse)
 * @max: Valeur maximale (incluse)
 *
 * Return: Pointeur vers le tableau alloué, NULL si erreur
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;  /* Nombre d'éléments */
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* Remplir le tableau avec min à max */
	for (i = 0; i < len; i++)
		arr[i] = min + i;

	return (arr);
}