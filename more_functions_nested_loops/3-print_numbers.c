#include "main.h"

/**
 * print_numbers - Imprime les chiffres de 0 à 9 suivis d'un saut de ligne
 */
void print_numbers(void)
{
	char number;
	for (number = '0'; number <= '9'; number++)
    {
	_putchar(number);
    }
	_putchar('\n');
}
