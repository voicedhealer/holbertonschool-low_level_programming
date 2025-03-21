#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Affiche des éléments de types variables selon un format
 * @format: Chaîne de format (c=char, i=int, f=float, s=string)
 * @...: Éléments variables à afficher
 *
 * Description: Les éléments sont séparés par ", ". 
 *              Les strings NULL sont affichés comme "(nil)".
 *              Un saut de ligne est ajouté à la fin.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed = 0;
	char *s;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			if (printed)
				printf(", ");

			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					printed = 1;
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					printed = 1;
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					printed = 1;
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s", s);
					printed = 1;
					break;
			}
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
