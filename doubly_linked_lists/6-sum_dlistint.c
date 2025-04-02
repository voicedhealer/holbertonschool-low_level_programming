#include "lists.h"

/**
 * sum_dlistint - Calcule la somme de tous les éléments d'une liste dlistint_t
 * @head: Pointeur vers la tête de la liste
 *
 * Return: La somme des données (n) dans la liste,
 *         ou 0 si la liste est vide
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* Initialisation de la somme à 0 */

	/* Parcourt la liste et additionne les valeurs */
	while (head != NULL)
	{
		sum += head->n; /* Ajoute la valeur du nœud actuel */
		head = head->next; /* Passe au nœud suivant */
	}

	return (sum); /* Retourne la somme totale */
}
