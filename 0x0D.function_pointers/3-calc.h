#ifndef CALC_H
#define CALC_H

/**
 * struct op - Structure représentant une opération
 * @op: L'opérateur sous forme de chaîne
 * @f: Pointeur vers la fonction d'opération correspondante
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Prototypes des fonctions */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
