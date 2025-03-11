char *string_nconcat(char *s1, char *s2, unsigned int n) {
    #include <stdlib.h>

/**
 * string_nconcat - Concatène deux chaînes avec une limite sur s2
 * @s1: Première chaîne
 * @s2: Deuxième chaîne
 * @n: Nombre maximal d'octets à prendre de s2
 *
 * Return: Pointeur vers la nouvelle chaîne concaténée, NULL si échec
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, copy_len, i, j;

	len1 = 0;
	len2 = 0;

	/* Traite NULL comme chaîne vide */
	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";

	/* Calcule longueurs */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Détermine combien de s2 copier */
	copy_len = (n >= len2) ? len2 : n;

	/* Alloue mémoire */
	concat = malloc(len1 + copy_len + 1);
	if (concat == NULL)
		return (NULL);

	/* Copie s1 */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copie s2 (jusqu'à copy_len) */
	for (j = 0; j < copy_len; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0'; /* Terminaison nulle */

	return (concat);
}

