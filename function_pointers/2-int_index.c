#include "function_pointers"
#include <stdio.h>

/**
 * int_index - Recherche un entier dans un tableau via une fonction de comparaison
 * @array: Tableau d'entiers à parcourir
 * @size: Nombre d'éléments dans le tableau
 * @cmp: Pointeur vers la fonction de comparaison
 *
 * Return: Index du premier élément trouvé, -1 si non trouvé ou si paramètres invalides
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
