#include "main.h"

/**
 * puts_half - Imprime la deuxième moitié d'une chaîne
 * @str: La chaîne à imprimer
 *
 * Description: Cette fonction imprime la deuxième moitié d'une chaîne.
 * Si le nombre de caractères est impair, elle imprime les
 * (longueur_de_la_chaîne + 1) / 2 derniers caractères.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
		length++;

	start = (length % 2 == 0) ? length / 2 : (length + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
