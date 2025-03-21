#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Alloue et initialise une grille 2D d'entiers
 * @width: Largeur de la grille (nombre de colonnes)
 * @height: Hauteur de la grille (nombre de lignes)
 *
 * Return: Pointeur vers la grille allouée, NULL en cas d'échec
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
