#include <stddef.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the start of the matrix (treated as a 1D array)
 * @size: Size of the square matrix (number of rows/columns)
 *
 * Description: This function calculates and prints the sum of the two
 * diagonals of a square matrix. The matrix is represented as a 1D array,
 * and the diagonals are accessed using pointer arithmetic.
 *
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                return &s[i];
            }
        }
    }

    return (NULL);
}
