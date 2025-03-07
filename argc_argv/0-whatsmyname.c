#include <stdio.h>
#include <string.h>

/**
 * main - Imprime le nom du programme
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	char *nom_programme;

	(void)argc;  /* Ignorer argc car non utilisé */

	nom_programme = strrchr(argv[0], '/');
	if (nom_programme == NULL)
		nom_programme = argv[0];
	else
		nom_programme++;  /* Sauter le '/' */

	printf("%s\n", nom_programme);

	return (0);
}
