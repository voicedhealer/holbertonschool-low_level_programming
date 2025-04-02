#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée
 * @head: Double pointeur vers la tête de la liste
 * @str: Chaîne de caractères à stocker dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (!head)  // Vérifie si le pointeur head est valide
        return (NULL);

    new_node = malloc(sizeof(list_t));  // Alloue le nouveau nœud
    if (!new_node)
        return (NULL);

    new_node->str = strdup(str);  // Duplique la chaîne str
    if (!new_node->str)
    {
        free(new_node);  // Libère le nœud si strdup échoue
        return (NULL);
    }

    new_node->len = strlen(str);        // Calcule la longueur de la chaîne
    new_node->next = *head;             // Lie le nouveau nœud à l'ancienne tête
    *head = new_node;                   // Met à jour la tête de liste

    return (new_node);
}
