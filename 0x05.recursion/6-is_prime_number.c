/**
 * check_prime - Vérifie si un nombre est premier
 * @n: Le nombre à vérifier
 * @i: Le diviseur actuel
 *
 * Return: 1 si le nombre est premier, 0 sinon
 */
int check_prime(int n, int i)
{
		if (n <= 1)
			return (0);
		if (i * i > n)
			return (1);
		if (n % i == 0)
			return (0);
		return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Détermine si un entier est un nombre premier
 * @n: Le nombre à vérifier
 *
 * Return: 1 si le nombre est premier, 0 sinon
 */
int is_prime_number(int n)
{
		return (check_prime(n, 2));
}

