#include "main.h"

/**
 * _strspn - Obtient la longueur d'un préfixe sous-chaîne
 * @s: La chaîne à examiner
 * @accept: La chaîne contenant les caractères à faire correspondre
 *
 * Return: Le nombre d'octets dans le segment initial de s
 * qui ne contient que des octets de accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				match = 1;
				break;
			}
		}
		if (match == 0)
			return (count);
	}

	return (count);
}
