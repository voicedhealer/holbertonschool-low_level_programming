#include "main.h"

/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers
 * @a: Le tableau à inverser
 * @n: Le nombre d'éléments dans le tableau
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
