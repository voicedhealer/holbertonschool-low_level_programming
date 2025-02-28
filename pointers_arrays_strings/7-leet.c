#include "main.h"

/**
 * leet - Encode une chaîne en 1337
 * @str: La chaîne à encoder
 *
 * Return: Pointeur vers la chaîne encodée
 */
char *leet(char *str)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_numbers[j];
				break;
			}
		}
	}

	return (str);
}
