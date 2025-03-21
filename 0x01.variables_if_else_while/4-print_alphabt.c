#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules, sauf 'q' et 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
