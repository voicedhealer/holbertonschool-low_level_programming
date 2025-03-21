# C - Function Pointers

## Description
Ce projet explore le concept des pointeurs de fonction en C, un outil puissant qui permet de stocker et d'utiliser des adresses de fonctions. Les pointeurs de fonction offrent une flexibilité accrue dans la programmation, permettant des techniques avancées comme les callbacks et la programmation dynamique.

## Objectifs d'apprentissage
À la fin de ce projet, vous devriez être capable de :
- Comprendre ce que sont les pointeurs de fonction et comment ils fonctionnent
- Déclarer et initialiser des pointeurs de fonction
- Utiliser des pointeurs de fonction pour appeler des fonctions indirectement
- Implémenter des callbacks et des tables de fonctions
- Comprendre les applications pratiques des pointeurs de fonction

## Fichiers du projet
- `0-print_name.c` : Fonction qui imprime un nom en utilisant un pointeur de fonction
- `1-array_iterator.c` : Fonction qui exécute une fonction donnée sur chaque élément d'un tableau
- `2-int_index.c` : Fonction qui recherche un entier dans un tableau
- `3-main.c`, `3-op_functions.c`, `3-get_op_func.c`, `3-calc.h` : Programme de calculatrice simple utilisant des pointeurs de fonction

## Compilation
Tous les fichiers seront compilés sur Ubuntu 20.04 LTS en utilisant gcc avec les options suivantes :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Concepts clés
1. **Déclaration d'un pointeur de fonction** :
   ```c
   returnType (*pointerName)(parameterTypes);
   ```

2. **Initialisation d'un pointeur de fonction** :
   ```c
   pointerName = &functionName;
   ```

3. **Appel d'une fonction via un pointeur** :
   ```c
   (*pointerName)(arguments);
   ```

## Utilisation
Exemple d'utilisation d'un pointeur de fonction :

```c
#include 

void print_hello(char *name) {
    printf("Hello, %s!\n", name);
}

int main(void) {
    void (*ptr)(char *) = &print_hello;
    (*ptr)("Alice");
    return (0);
}
```

## Auteur
Bernardot Vivien

## Ressources supplémentaires
- [Function Pointers in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)

Ce projet vous permettra de maîtriser les pointeurs de fonction, un outil puissant pour créer des programmes C flexibles et dynamiques.

Citations:
[1] https://dev.to/thecodingcivilengineer/function-pointers-in-c-32e9
[2] https://blog.alphorm.com/pointeurs-fonctions-c-flexibilite-dynamique
[3] https://www.upgrad.com/tutorials/software-engineering/c-tutorial/function-pointer-in-c/
[4] https://fr.wikibooks.org/wiki/Programmation_C-C++/Pointeurs_et_r%C3%A9f%C3%A9rences_de_fonctions
[5] https://www.tutorialspoint.com/cprogramming/c_function_pointers.htm
[6] https://koor.fr/C/Tutorial/Pointeurs.wp
[7] https://www.learn-c.org/en/Function_Pointers
[8] https://zestedesavoir.com/tutoriels/755/le-langage-c-1/notions-avancees/les-pointeurs-de-fonction/

---