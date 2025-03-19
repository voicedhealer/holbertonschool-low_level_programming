#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * struct op - Structure représentant une opération
 * @op: L'opérateur sous forme de chaîne
 * @f: Pointeur vers la fonction correspondante
 *
 * Description: Associe un opérateur à une fonction d'opération
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
