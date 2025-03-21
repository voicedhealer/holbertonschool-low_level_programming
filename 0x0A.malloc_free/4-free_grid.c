#include <stdlib.h>

/**
 * free_grid - Libère la mémoire d'une grille 2D
 * @grid: Pointeur vers la grille à libérer
 * @height: Nombre de lignes de la grille
 */
void free_grid(int **grid, int height)
{
		int i;

		if (grid == NULL)
			return;

		/* Libère chaque ligne */
		for (i = 0; i < height; i++)
			free(grid[i]);

		/* Libère le tableau de pointeurs */
		free(grid);
}
