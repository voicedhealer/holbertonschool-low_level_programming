#include "main.h"
/**
 * _sqrt_helper - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if it does not exist
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess > n)
        return (-1); /* Si le carré dépasse n, pas de racine carrée naturelle */
    if (guess * guess == n)
        return (guess); /* Si le carré correspond à n, on a trouvé la racine */
    return (_sqrt_helper(n, guess + 1)); /* Essayer avec le prochain entier */
}

/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1); /* Pas de racine carrée pour les nombres négatifs */
    return (_sqrt_helper(n, 0)); /* Commence avec un guess initial de 0 */
}
