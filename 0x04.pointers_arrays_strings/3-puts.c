#include "main.h"

/**
 * _puts - Imprime une chaîne suivie d'une nouvelle ligne
 * @str: Pointeur vers la chaîne à imprimer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
