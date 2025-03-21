# C - More malloc, free

## Description
Ce projet approfondit les concepts d'allocation dynamique de mémoire en C, en se concentrant sur des utilisations plus avancées de `malloc` et `free`. Il explore également de nouvelles fonctions comme `calloc` et `realloc`.

## Objectifs d'apprentissage
À la fin de ce projet, vous devriez être capable de :
- Utiliser la fonction `exit` pour terminer un programme
- Comprendre et utiliser les fonctions `calloc` et `realloc`
- Gérer efficacement la mémoire dans des scénarios plus complexes
- Implémenter des algorithmes de gestion de mémoire personnalisés

## Fichiers du projet
- `0-malloc_checked.c` : Alloue de la mémoire en utilisant `malloc` et gère les erreurs
- `1-string_nconcat.c` : Concatène deux chaînes, en utilisant au plus n bytes de la seconde chaîne
- `2-calloc.c` : Implémente la fonction `calloc` en utilisant `malloc`
- `3-array_range.c` : Crée un tableau d'entiers contenant tous les valeurs d'un intervalle donné
- `100-realloc.c` : Implémente la fonction `realloc` en utilisant `malloc` et `free`
- `101-mul.c` : Programme qui multiplie deux nombres positifs

## Compilation
Tous les fichiers sont compilés sur Ubuntu 20.04 LTS en utilisant gcc avec les options suivantes :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Utilisation
Voici un exemple d'utilisation de la fonction `malloc_checked` :

```c
#include "main.h"
#include 
#include 

int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
```

## Concepts clés

### `exit`
La fonction `exit` termine le programme immédiatement. Elle est utile pour gérer les erreurs critiques.

### `calloc`
`calloc` alloue de la mémoire pour un tableau d'éléments et initialise tous les octets à zéro.

### `realloc`
`realloc` change la taille d'un bloc de mémoire précédemment alloué, permettant d'agrandir ou de réduire l'allocation.

## Bonnes pratiques
1. Toujours vérifier le retour des fonctions d'allocation de mémoire.
2. Libérer toute la mémoire allouée avant de quitter le programme.
3. Utiliser `calloc` quand vous avez besoin d'initialiser la mémoire à zéro.
4. Être prudent avec `realloc`, car il peut invalider les pointeurs existants.

## Auteur
Bernardot Vivien

## Ressources supplémentaires
- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)
- [Automatic and dynamic allocation, malloc and free](https://intranet.hbtn.io/concepts/62)

Ce projet vous permettra de maîtriser des techniques avancées de gestion de mémoire en C, essentielles pour développer des programmes robustes et efficaces.

---