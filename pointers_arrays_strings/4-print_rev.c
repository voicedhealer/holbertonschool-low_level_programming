#include <stdio.h>
#include <string.h>

/**
* imprimer_inverse - Imprime une chaîne de caractères à l'envers.
* @chaine: La chaîne de caractères à inverser.
*
* Cette fonction prend une chaîne de caractères en entrée,
* l'inverse et l'affiche suivie d'un saut de ligne.
*/
void imprimer_inverse(const char *chaine)
{
    int i, longueur;

    if (chaine == NULL)
    {
        return;
    }

    longueur = strlen(chaine);
    for (i = longueur - 1; i >= 0; i--)
    {
        putchar(chaine[i]);
    }
    putchar('\n');
}
