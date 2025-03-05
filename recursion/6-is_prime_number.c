#include "main.h"
/**
 * check_prime - Helper function to check if a number is prime
 * @n: The number to check
 * @divisor: The current divisor being checked
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int divisor)
{
    if (n <= 1)
        return (0);
    if (divisor * divisor > n)
        return (1);
    if (n % divisor == 0)
        return (0);
    return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - Determines if an integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
    return (check_prime(n, 2));
}
