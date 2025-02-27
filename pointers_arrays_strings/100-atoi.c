#include "main.h"

/**
 * _atoi - Convertit une chaîne en entier
 * @s: La chaîne à convertir
 *
 * Return: L'entier converti
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (result > (2147483647 - digit) / 10)
		{
			return (sign == 1 ? 2147483647 : -2147483648);
		}
		result = result * 10 + digit;
		i++;
	}

	return result * sign;
}
