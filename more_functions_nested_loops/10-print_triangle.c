#include "main.h"

/**
 * print_triangle - imprime un triangle suivi d'une nouvelle ligne
 * @size: taille du triangle
 */
void print_triangle(int size)
{
	int row, column, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space > 0; space--)
			{
				_putchar(' ');
			}
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
