#include <stdio.h>

/**
 * main - Imprime le nom du programme
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
    (void)argc;  /* Ignorer argc car non utilisé */

    printf("%s\n", argv[0]);

    return (0);
}
