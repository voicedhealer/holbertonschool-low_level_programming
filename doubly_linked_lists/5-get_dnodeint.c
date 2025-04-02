#include "lists.h"

/**
 * get_dnodeint_at_index - Renvoie le nœud à un index spécifique
 * @head: Pointeur vers la tête de la liste
 * @index: Position du nœud à récupérer (en commençant à 0)
 *
 * Return: Adresse du nœud trouvé, ou NULL si l'index est invalide
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0;      /* Compteur d'index */
    dlistint_t *current = head;  /* Pointeur de parcours */

    /* Parcourt la liste jusqu'à trouver l'index ou la fin */
    while (current != NULL)
    {
        if (count == index)      /* Si l'index correspond */
            return (current);    /* Renvoie le nœud actuel */
        
        count++;                 /* Incrémente le compteur */
        current = current->next; /* Passe au nœud suivant */
    }

    return (NULL); /* Si l'index n'existe pas dans la liste */
}
