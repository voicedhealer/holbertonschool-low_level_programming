#include <stdio.h>

/**
 * main - Affiche l'alphabet en ordre inverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'z'; letter >= 'a'; letter--)
    {
        putchar(letter);
    }
    putchar('\n');

    return (0);
}
