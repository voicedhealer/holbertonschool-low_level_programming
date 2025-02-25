#include "main.h"

/**
 * print_line - dessine une ligne diagonale dans le terminal
 * @n: nombre de fois que le caractère _ doit être imprimé
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i; j;

		for (i = 0; i < n; i++)
		
		{	for (j = 0; j < n; j++)

	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
		}
	}	 	
}
