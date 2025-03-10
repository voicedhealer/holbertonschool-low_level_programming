#include <stdlib.h>

/**
 * alloc_grid - Alloue et initialise une grille 2D d'entiers
 * @width: Largeur de la grille (nombre de colonnes)
 * @height: Hauteur de la grille (nombre de lignes)
 *
 * Return: Pointeur vers la grille allouée, NULL en cas d'échec
 */
int **alloc_grid(int width, int height)
{
		if (width <= 0 || height <= 0)
			return (NULL);

		int **grid;
		int i, j;

		grid = malloc(sizeof(int *) * height);
		if (grid == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
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
