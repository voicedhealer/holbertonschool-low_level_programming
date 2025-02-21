#include <unistd.h>

/**
 * main - Affiche _putchar suivi d'une nouvelle ligne
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}

	return (0);
}
