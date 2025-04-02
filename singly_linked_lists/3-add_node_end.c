#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @str: Chaîne à mesurer
 *
 * Return: Longueur de la chaîne
 */
int _strlen(const char *str)
{
    int len = 0;

    if (!str) /* Gestion de str == NULL */
        return (0);

    while (*str)
    {
        len++;
        str++;
    }

    return (len);
}

/**
 * add_node_end - Ajoute un nœud à la fin d'une liste chaînée
 * @head: Double pointeur vers la tête de la liste
 * @str: Chaîne à dupliquer dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last;
    char *new_str;

    if (!head) /* Vérification de head */
        return (NULL);

    new_str = strdup(str); /* Duplication de str */
    if (!new_str) /* Échec de strdup */
        return (NULL);

    new_node = malloc(sizeof(list_t)); /* Allocation du nœud */
    if (!new_node)
    {
        free(new_str); /* Libération de la chaîne en cas d'échec */
        return (NULL);
    }

    new_node->str = new_str;
    new_node->len = _strlen(str);
    new_node->next = NULL; /* Initialisation de next à NULL */

    if (*head == NULL) /* Cas liste vide */
    {
        *head = new_node;
    }
    else
    {
        last = *head;
        while (last->next != NULL) /* Parcours jusqu'au dernier nœud */
            last = last->next;
        last->next = new_node; /* Liaison du dernier nœud */
    }

    return (new_node);
}
