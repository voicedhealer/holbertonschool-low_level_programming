#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste dlistint_t
 * @head: Double pointeur vers la tête de la liste
 * @n: Valeur à stocker dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *current;

    if (head == NULL) /* Vérification du pointeur head */
        return (NULL);

    /* Allocation de mémoire pour le nouveau nœud */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;       /* Initialisation de la donnée */
    new_node->next = NULL; /* Le nouveau nœud est le dernier */

    if (*head == NULL) /* Cas liste vide */
    {
        new_node->prev = NULL;
        *head = new_node;
    }
    else
    {
        /* Parcours jusqu'au dernier nœud */
        current = *head;
        while (current->next != NULL)
            current = current->next;

        current->next = new_node; /* Lien avec l'ancien dernier nœud */
        new_node->prev = current; /* Lien inverse */
    }

    return (new_node);
}
