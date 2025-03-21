# C - Structures, typedef

## Description
Ce projet explore les concepts des structures (`struct`) et du mot-clé `typedef` en langage C. Ces outils permettent de regrouper plusieurs variables sous une seule entité (structure) et de simplifier la déclaration de types personnalisés.

## Objectifs d'apprentissage
À la fin de ce projet, vous devriez être capable de :
- Comprendre ce qu'est une structure (`struct`) et pourquoi elle est utile.
- Définir et utiliser des structures pour regrouper des données.
- Comprendre l'importance du mot-clé `typedef` pour créer des alias de types.
- Utiliser des structures dans des programmes pratiques.
- Manipuler des pointeurs vers des structures.
- Utiliser efficacement les structures pour organiser les données dans vos programmes.

---

## Fichiers du projet
Voici les fichiers inclus dans ce projet :

- **`dog.h`** : Fichier d'en-tête contenant la définition d'une structure `dog` et ses prototypes associés.
- **`1-init_dog.c`** : Initialise une variable de type `struct dog`.
- **`2-print_dog.c`** : Affiche les informations d'une structure `dog`.
- **`4-new_dog.c`** : Crée une nouvelle structure `dog` en allouant dynamiquement la mémoire.
- **`5-free_dog.c`** : Libère la mémoire allouée pour une structure `dog`.

---

## Concepts clés

### 1. Les structures (`struct`)
Les structures permettent de regrouper plusieurs variables (de différents types) sous un même type.  
Exemple :
```c
struct dog
{
	char *name;
	float age;
	char *owner;
};
```

### 2. Le mot-clé `typedef`
Le mot-clé `typedef` permet de créer un alias pour un type, simplifiant ainsi les déclarations.  
Exemple :
```c
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
```
Ici, `dog_t` devient un alias pour `struct dog`.

---

## Compilation
Tous les fichiers sont compilés sur Ubuntu 20.04 LTS en utilisant gcc avec les options suivantes :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

---

## Utilisation

### Exemple d'utilisation du fichier `dog.h`
```c
#include "dog.h"
#include 

int main(void)
{
	dog_t my_dog;

	my_dog.name = "Buddy";
	my_dog.age = 3.5;
	my_dog.owner = "Alice";

	printf("Nom : %s\n", my_dog.name);
	printf("Âge : %.1f\n", my_dog.age);
	printf("Propriétaire : %s\n", my_dog.owner);

	return (0);
}
```

---

## Bonnes pratiques
1. Toujours initialiser vos structures avant utilisation.
2. Libérer correctement la mémoire allouée dynamiquement avec `free`.
3. Utiliser `typedef` pour simplifier vos déclarations, surtout si vous manipulez fréquemment le type.

---

## Auteur
Bernardot Vivien

---

## Ressources supplémentaires
- [Structures en C](https://www.learn-c.org/en/Structures)
- [Guide sur typedef](https://www.geeksforgeeks.org/typedef-in-c/)
- [Tutoriel sur les structures](https://www.tutorialspoint.com/cprogramming/c_structures.htm)

Ce projet vous permettra de mieux comprendre comment regrouper et manipuler des données complexes en C grâce aux structures et à `typedef`. 😊

---