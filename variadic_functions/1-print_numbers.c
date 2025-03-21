#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Affiche des nombres suivis d'une nouvelle ligne
 * @separator: Chaîne à imprimer entre les nombres
 * @n: Nombre d'entiers passés à la fonction
 * @...: Liste variable d'entiers à afficher
 *
 * Description: Si `separator` est NULL, il n'est pas imprimé.
 *              Une nouvelle ligne est imprimée à la fin.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
