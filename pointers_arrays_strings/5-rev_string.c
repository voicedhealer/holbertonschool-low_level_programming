#include "main.h"

/**
 * rev_string - Reverse a string in place.
 * @s: The string to be reversed.
 *
 * Return: Nothing (void).
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* Find the length of the string */
	for (j = 0; s[j] != '\0'; j++)
		;

	/* Reverse the string by swapping characters */
	for (i = 0, j = j - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
