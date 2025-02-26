#include "main.h"

/**
 * print_rev - Imprime une chaîne de caractères à l'envers.
 * @s: La chaîne de caractères à inverser.
 *
 * Retourne: Rien.
 */
void print_rev(char *s)
{
    int longueur = 0;
    int i;

    if (s == NULL)
        return;

    /* Calculer la longueur de la chaîne */
    while (s[longueur] != '\0')
    {
        longueur++;
    }

    /* Afficher les caractères à l'envers */
    for (i = longueur - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    /* Ajouter un saut de ligne */
    _putchar('\n');
}
