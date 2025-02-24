#include "main.h"

/**
 * print_most_numbers - Imprime les chiffres de 0 à 9 sauf 2 et 4
 */
void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
