#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
    {
        return;
    }
    return 1 + _strlen_recursion(s + 1);
}
