#include <stdio.h>

/**
 * main - Affiche tous les chiffres de base 10 de 0 à 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}
