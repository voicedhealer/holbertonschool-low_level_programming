#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments (unused in this case)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* On ignore argv car il n'est pas utilisé */
	printf("%d\n", argc - 1);
	return (0);
}
