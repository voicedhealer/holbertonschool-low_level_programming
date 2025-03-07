/**
 * sqrt_helper - Fonction auxiliaire pour calculer la racine carrée
 * @n: Le nombre dont on cherche la racine carrée
 * @i: L'itérateur pour la recherche
 *
 * Return: La racine carrée naturelle si elle existe, -1 sinon
 */
int sqrt_helper(int n, int i)
{
		if (i * i > n)
			return (-1);
		if (i * i == n)
			return (i);
		return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Calcule la racine carrée naturelle d'un nombre
 * @n: Le nombre dont on cherche la racine carrée
 *
 * Return: La racine carrée naturelle si elle existe, -1 sinon
 */
int _sqrt_recursion(int n)
{
		if (n < 0)
			return (-1);
		return (sqrt_helper(n, 0));
}
