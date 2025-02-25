#include <stdio.h>

/**
 * main - imprime les nombres de 1 à 100 avec les règles Fizz-Buzz
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz");
        else if (i % 3 == 0)
            printf("Fizz");
        else if (i % 5 == 0)
            printf("Buzz");
        else
            printf("%d", i);

        if (i < 100)
            printf(" ");
    }
    printf("\n");

    return (0);
}
