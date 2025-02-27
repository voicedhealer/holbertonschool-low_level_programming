#include <stdio.h>
#include "main.h"

/**
 * print_array - Imprime n éléments d'un tableau d'entiers
 * @a: Le tableau à imprimer
 * @n: Le nombre d'éléments à imprimer
 *
 * Description: Les nombres sont séparés par une virgule et un espace.
 * Un saut de ligne est ajouté à la fin.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
