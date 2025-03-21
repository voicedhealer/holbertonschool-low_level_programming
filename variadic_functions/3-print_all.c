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
	char *s, *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", sep, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", sep, va_arg(args, double));
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
		     format[i] == 'f' || format[i] == 's') && format[i + 1])
			sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
