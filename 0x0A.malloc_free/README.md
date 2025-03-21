# C - malloc, free

## Description
Ce projet explore les concepts fondamentaux de l'allocation dynamique de mémoire en C à l'aide des fonctions `malloc` et `free`. Ces fonctions permettent de gérer la mémoire de manière flexible pendant l'exécution d'un programme.

## Objectifs d'apprentissage
À la fin de ce projet, vous devriez être capable de :
- Comprendre la différence entre allocation automatique et allocation dynamique.
- Utiliser les fonctions `malloc` et `free` pour allouer et libérer de la mémoire.
- Identifier les situations où l'utilisation de `malloc` est nécessaire.
- Éviter les fuites de mémoire grâce à une gestion correcte avec `free`.
- Utiliser des outils comme `valgrind` pour détecter les problèmes liés à la gestion de mémoire.

## Fichiers du projet
- `0-create_array.c` : Crée un tableau dynamique et initialise ses éléments avec un caractère donné.
- `1-strdup.c` : Retourne une copie d'une chaîne de caractères dans un espace mémoire nouvellement alloué.
- `2-str_concat.c` : Concatène deux chaînes dans un espace mémoire nouvellement alloué.
- `3-alloc_grid.c` : Crée un tableau 2D dynamique initialisé à 0.
- `4-free_grid.c` : Libère la mémoire allouée pour un tableau 2D.
- `100-argstostr.c` : Concatène tous les arguments passés au programme dans une seule chaîne.
- `101-strtow.c` : Divise une chaîne en mots et retourne un tableau dynamique contenant ces mots.

## Compilation
Tous les fichiers sont compilés sur Ubuntu 20.04 LTS en utilisant **gcc** avec les options suivantes :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Utilisation
Voici comment utiliser ces fonctions dans votre code :

```c
#include "main.h"

int main(void)
{
    char *str = _strdup("Holberton");
    if (str == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    printf("%s\n", str);
    free(str);
    return (0);
}
```

## Concepts clés
### Allocation dynamique (`malloc`)
La fonction `malloc(size_t size)` permet d'allouer dynamiquement un bloc de mémoire dont la taille est spécifiée par l'utilisateur. Elle retourne un pointeur vers le début du bloc alloué ou `NULL` en cas d'échec.

### Libération de mémoire (`free`)
La fonction `free(void *ptr)` libère la mémoire précédemment allouée avec `malloc`. Cela permet d'éviter les fuites de mémoire.

### Bonnes pratiques
1. Toujours vérifier si le retour de `malloc` est NULL avant d'utiliser le pointeur.
2. Libérer toute la mémoire allouée dynamiquement avec `free`.
3. Utiliser des outils comme **valgrind** pour détecter les fuites de mémoire.

## Auteur
Bernardot Vivien

## Ressources supplémentaires
- [Introduction à malloc et free](https://fr.wikibooks.org/wiki/Programmation_C/Gestion_de_la_m%C3%A9moire)
- [Tutoriel sur malloc](https://danluu.com/malloc-tutorial/)
- [Détection des fuites avec valgrind](https://valgrind.org/docs/manual/mc-manual.html)

Ce projet vous permettra de maîtriser l'allocation dynamique en C, une compétence essentielle pour écrire des programmes efficaces et robustes. 😊

Citations:
[1] https://danluu.com/malloc-tutorial/
[2] https://fr.wikibooks.org/wiki/Programmation_C/Gestion_de_la_m%C3%A9moire
[3] https://github.com/Ojerry/alx-low_level_programming-1/blob/master/0x0B-malloc_free/README.md
[4] http://ressources.unit.eu/cours/Cfacile/co/Chapitre_9_3.html
[5] https://stackoverflow.com/questions/852072/simple-c-implementation-to-track-memory-malloc-free
[6] https://zestedesavoir.com/tutoriels/755/le-langage-c-1/1043_aggregats-memoire-et-fichiers/4285_lallocation-dynamique/
[7] https://github.com/sonugiri1043/Malloc-Free/blob/master/README.md
[8] https://blog.alphorm.com/gestion-memoire-dynamique-c-fonctions-cruciales

---