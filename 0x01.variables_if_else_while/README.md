# C - Variables, if, else, while

## Description
Ce projet est une introduction aux concepts fondamentaux de programmation en C, notamment les variables, les structures de contrôle conditionnelles (if, else) et les boucles (while). Il vise à établir une base solide pour la programmation en C.

## Objectifs d'apprentissage
À la fin de ce projet, vous devriez être capable de :
- Comprendre et utiliser les variables en C
- Maîtriser les structures de contrôle if et else
- Utiliser efficacement les boucles while
- Comprendre les opérateurs arithmétiques et logiques en C
- Manipuler les types de données de base (int, char, etc.)
- Utiliser la fonction putchar pour l'affichage

## Fichiers du projet
- `0-positive_or_negative.c` : Programme qui détermine si un nombre est positif, négatif ou zéro
- `1-last_digit.c` : Affiche le dernier chiffre d'un nombre
- `2-print_alphabet.c` : Imprime l'alphabet en minuscules
- `3-print_alphabets.c` : Imprime l'alphabet en minuscules puis en majuscules
- `4-print_alphabt.c` : Imprime l'alphabet en minuscules sauf 'q' et 'e'
- `5-print_numbers.c` : Imprime les chiffres de 0 à 9
- `6-print_numberz.c` : Imprime les chiffres de 0 à 9 en utilisant putchar
- `7-print_tebahpla.c` : Imprime l'alphabet en minuscules à l'envers
- `8-print_base16.c` : Imprime tous les nombres de la base 16 en minuscules
- `9-print_comb.c` : Imprime toutes les combinaisons possibles de chiffres uniques

## Compilation
Tous les fichiers seront compilés sur Ubuntu 20.04 LTS en utilisant gcc avec les options suivantes :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Concepts clés
1. **Variables** : Déclaration et initialisation de variables
2. **Structures conditionnelles** : Utilisation de if, else if, else
3. **Boucles** : Utilisation de while pour les itérations
4. **Opérateurs** : Arithmétiques (+, -, *, /, %) et logiques (&&, ||, !)
5. **Fonction putchar** : Pour l'affichage caractère par caractère

## Exemple d'utilisation
```c
#include 

int main(void)
{
    int n = 42;
    
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);
    
    return (0);
}
```

## Auteur
Bernardot Vivien

## Ressources supplémentaires
- [Keywords and identifiers in C](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [Integers in C](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [If statements in C](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [While loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)

Ce projet vous fournira les bases essentielles pour commencer à programmer efficacement en C.

---