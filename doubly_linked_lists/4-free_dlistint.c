#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Libère la mémoire allouée pour une liste dlistint_t
 * @head: Pointeur vers le premier nœud de la liste
 *
 * Description : Parcourt chaque nœud de la liste et libère sa mémoire.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current_node;

    /* Parcourt la liste en libérant chaque nœud */
    while (head != NULL)
    {
        current_node = head;      /* Sauvegarde le nœud courant */
        head = head->next;        /* Avance au nœud suivant */
        free(current_node);       /* Libère le nœud sauvegardé */
    }
}
