# C - More functions, more nested loops

## Description
Ce projet approfondit les concepts de fonctions et de boucles imbriquées en C. Il vise à renforcer la compréhension des structures de contrôle et à développer la capacité à créer des fonctions plus complexes.

## Objectifs d'apprentissage
À la fin de ce projet, vous devriez être capable de :
- Créer et utiliser des fonctions plus avancées
- Comprendre et implémenter des boucles imbriquées
- Utiliser efficacement les prototypes de fonctions
- Maîtriser la portée des variables en C
- Comprendre les en-têtes et leur utilisation avec `#include`

## Fichiers du projet
- `0-isupper.c` : Fonction qui vérifie si un caractère est en majuscule
- `1-isdigit.c` : Fonction qui vérifie si un caractère est un chiffre
- `2-mul.c` : Fonction qui multiplie deux entiers
- `3-print_numbers.c` : Fonction qui imprime les chiffres de 0 à 9
- `4-print_most_numbers.c` : Fonction qui imprime les chiffres de 0 à 9 (sauf 2 et 4)
- `5-more_numbers.c` : Fonction qui imprime 10 fois les nombres de 0 à 14
- `6-print_line.c` : Fonction qui dessine une ligne droite dans le terminal
- `7-print_diagonal.c` : Fonction qui dessine une ligne diagonale dans le terminal
- `8-print_square.c` : Fonction qui imprime un carré
- `9-fizz_buzz.c` : Programme qui imprime les nombres de 1 à 100 avec le jeu Fizz-Buzz
- `10-print_triangle.c` : Fonction qui imprime un triangle

## Compilation
Tous les fichiers seront compilés sur Ubuntu 20.04 LTS en utilisant gcc avec les options suivantes :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Concepts clés
1. **Fonctions** : Création et utilisation de fonctions personnalisées
2. **Boucles imbriquées** : Utilisation de boucles à l'intérieur d'autres boucles
3. **Prototypes** : Déclaration de prototypes de fonctions dans les fichiers d'en-tête
4. **Portée des variables** : Compréhension de la portée locale et globale
5. **Fichiers d'en-tête** : Utilisation de `#include` pour inclure des fichiers d'en-tête

## Exemple d'utilisation
```c
#include "main.h"

int main(void)
{
    print_triangle(5);
    return (0);
}
```

## Auteur
Bernardot Vivien

## Ressources supplémentaires
- [Nested Loops in C](https://www.tutorialspoint.com/cprogramming/c_nested_loops.htm)
- [Functions in C](https://www.learn-c.org/en/Functions)
- [Function Prototypes in C](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [Header Files in C](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)

Ce projet vous permettra d'approfondir vos compétences en programmation C, en particulier dans l'utilisation des fonctions et des boucles imbriquées.

---