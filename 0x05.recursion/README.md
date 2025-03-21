# C - Recursion

## Description
Ce projet explore le concept de **récursion** en C, une technique où une fonction s'appelle elle-même pour résoudre un problème. La récursion est un outil puissant qui permet de résoudre des problèmes complexes en les décomposant en sous-problèmes plus simples.

## Objectifs d'apprentissage
À la fin de ce projet, vous devriez être capable de :
- Comprendre le concept de récursion et comment elle fonctionne.
- Différencier récursion directe et récursion indirecte.
- Identifier les cas où la récursion est appropriée.
- Implémenter des fonctions récursives pour résoudre des problèmes courants.
- Comprendre l'importance d'une condition d'arrêt pour éviter les boucles infinies.
- Comparer la récursion avec les boucles itératives.

---

## Fichiers du projet
Voici les fichiers inclus dans ce projet et leur rôle :

- **`0-puts_recursion.c`** : Fonction qui imprime une chaîne de caractères suivie d'une nouvelle ligne (équivalent récursif de `puts`).
- **`1-print_rev_recursion.c`** : Fonction qui imprime une chaîne de caractères en sens inverse.
- **`2-strlen_recursion.c`** : Fonction qui retourne la longueur d'une chaîne de caractères.
- **`3-factorial.c`** : Fonction qui calcule la factorielle d'un nombre donné.
- **`4-pow_recursion.c`** : Fonction qui calcule la valeur d'un entier élevé à une puissance donnée (exponentiation).
- **`5-sqrt_recursion.c`** : Fonction qui retourne la racine carrée naturelle d'un nombre (ou -1 si elle n'existe pas).
- **`6-is_prime_number.c`** : Fonction qui détermine si un nombre est un nombre premier.
- **`100-is_palindrome.c`** : Fonction qui vérifie si une chaîne est un palindrome.
- **`101-wildcmp.c`** : Fonction qui compare deux chaînes et gère le caractère spécial `*`.

---

## Compilation
Tous les fichiers seront compilés sur Ubuntu 20.04 LTS en utilisant gcc avec les options suivantes :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

---

## Concepts clés

### Qu'est-ce que la récursion ?
La récursion est une méthode où une fonction s'appelle elle-même pour résoudre un problème. Chaque appel récursif divise le problème en une version plus simple jusqu'à atteindre une condition d'arrêt.

### Condition d'arrêt
Une fonction récursive doit toujours inclure une condition d'arrêt (ou cas de base) pour éviter une boucle infinie. Par exemple :
```c
void print_numbers(int n)
{
    if (n == 0) // Cas de base
        return;

    printf("%d\n", n);
    print_numbers(n - 1); // Appel récursif
}
```

### Récursion vs Itération
La récursion peut souvent être remplacée par des boucles itératives, mais elle est parfois plus intuitive pour résoudre certains problèmes comme :
- Les calculs factoriels
- Les suites mathématiques (exemple : Fibonacci)
- Les algorithmes sur les arbres (parcours préfixe, infixe, postfixe)

---

## Exemple d'utilisation

Voici un exemple utilisant la fonction `factorial` :
```c
#include "main.h"
#include 

int main(void)
{
    int r;

    r = factorial(5);
    printf("5! = %d\n", r); // Affiche "5! = 120"

    r = factorial(0);
    printf("0! = %d\n", r); // Affiche "0! = 1"

    return (0);
}
```

---

## Bonnes pratiques
1. Toujours inclure une condition d'arrêt pour éviter les boucles infinies.
2. Vérifiez que vos appels récursifs convergent vers le cas de base.
3. Soyez conscient des limitations liées à la pile d'appels (`stack overflow`) si la profondeur de récursion est trop grande.

---

## Auteur
Bernardot Vivien

---

## Ressources supplémentaires
- [Introduction to Recursion](https://www.geeksforgeeks.org/recursion/)
- [Recursion in C](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [When to use recursion](https://www.freecodecamp.org/news/recursion-in-programming/)

Ce projet vous permettra de comprendre et de maîtriser l'un des concepts fondamentaux de l'algorithmique : la récursion ! 😊

---