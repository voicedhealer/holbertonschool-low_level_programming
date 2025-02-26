/**
* _strlen - Calcule la longueur d'une chaîne de caractères
* @s: Pointeur vers la chaîne de caractères
*
* Return: Le nombre de caractères dans la chaîne
*/
int _strlen(char *s)
{
	int longueur = 0;

 	while (*s != '\0')
    {
		longueur++;
		s++;
    }

	return longueur;
}
