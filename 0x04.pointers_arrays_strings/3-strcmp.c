#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères
 * @s1: Première chaîne à comparer
 * @s2: Deuxième chaîne à comparer
 *
 * Return: 0 si les chaînes sont identiques, sinon la différence entre
 * les premiers caractères non correspondants
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
