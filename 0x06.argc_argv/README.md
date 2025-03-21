# C - argc, argv

## Description
Ce projet explore l'utilisation des arguments de ligne de commande en C via les paramètres `argc` et `argv` de la fonction `main`. Ces outils permettent aux programmes d'interagir avec des données fournies directement par l'utilisateur au moment de leur exécution.

---

## Objectifs d'apprentissage
À la fin de ce projet, vous devriez être capable de :
- Comprendre les rôles des paramètres `argc` (argument count) et `argv` (argument vector).
- Manipuler les arguments passés à un programme via la ligne de commande.
- Utiliser des boucles pour parcourir et traiter les arguments.
- Gérer les cas où aucun argument n'est fourni.
- Développer des outils en ligne de commande simples et interactifs.

---

## Concepts clés

### Qu'est-ce que `argc` et `argv` ?
1. **`argc`** : Nombre total d'arguments passés au programme, incluant le nom du programme lui-même.
2. **`argv`** : Tableau de chaînes de caractères contenant les arguments passés.  
   - `argv` contient toujours le nom du programme.
   - Les autres éléments (`argv[1]`, `argv[2]`, ...) contiennent les arguments fournis par l'utilisateur.

### Exemple simple
```c
#include 

int main(int argc, char *argv[])
{
    int i;

    printf("Nombre d'arguments : %d\n", argc);
    for (i = 0; i 
#include 

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Erreur\n");
        return (1);
    }

    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    return (0);
}
```
Exécution :
```
$ ./mul 5 6
30
$ ./mul 5
Erreur
```

---

## Auteur
Bernardot Vivien

---

## Ressources supplémentaires

- [Arguments de ligne de commande en C](https://dept-info.labri.fr/~baudon/InitProg/arguments.html)
- [Introduction à argc et argv](https://www.thegeekstuff.com/2013/01/c-argc-argv/)
- [Guide sur les arguments en ligne de commande](https://learn.microsoft.com/fr-fr/cpp/cpp/main-function-command-line-args?view=msvc-170)

Ce projet vous permettra de maîtriser l'interaction entre un programme C et ses utilisateurs via la ligne de commande. 😊

Citations:
[1] https://community.f5.com/kb/technicalarticles/hands-on-c-argc-and-argv-from-main-function-explained/280989
[2] https://www.thegeekstuff.com/2013/01/c-argc-argv/
[3] https://stackoverflow.com/questions/3024197/what-does-int-argc-char-argv-mean
[4] https://www.reddit.com/r/Cplusplus/comments/mq2x7l/what_is_the_point_in_int_argc_char_argv_as_the/
[5] https://www.ibm.com/docs/en/i/7.4?topic=functions-main-function
[6] https://learn.microsoft.com/fr-fr/cpp/cpp/main-function-command-line-args?view=msvc-170
[7] https://dept-info.labri.fr/~baudon/InitProg/arguments.html
[8] https://www.ibm.com/docs/fr/i/7.5?topic=functions-main-function

---