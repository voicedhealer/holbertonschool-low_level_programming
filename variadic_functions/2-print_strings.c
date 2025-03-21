#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Imprime des chaînes suivies d'une nouvelle ligne
 * @separator: Chaîne à imprimer entre les chaînes
 * @n: Nombre de chaînes passées à la fonction
 * @...: Liste variable de chaînes à imprimer
 *
 * Description: Si separator est NULL, il n'est pas imprimé.
 *              Si une chaîne est NULL, (nil) est imprimé à la place.
 *              Une nouvelle ligne est imprimée à la fin.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
