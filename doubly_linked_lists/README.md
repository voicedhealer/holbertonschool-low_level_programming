# **C - Doubly Linked Lists**

## **Description**
Ce projet explore l'implémentation et la manipulation des **listes doublement chaînées** en langage C. Une liste doublement chaînée est une structure de données dynamique où chaque nœud contient :
- Une valeur (les données).
- Un pointeur vers le nœud suivant.
- Un pointeur vers le nœud précédent.

Les listes doublement chaînées sont particulièrement utiles lorsque vous devez parcourir une liste dans les deux directions (avant et arrière) ou effectuer des insertions/suppressions rapides à des positions spécifiques.

---

## **Table des matières**
1. [Fonctionnalités](#fonctionnalités)
2. [Prérequis](#prérequis)
3. [Installation](#installation)
4. [Utilisation](#utilisation)
5. [Structure du code](#structure-du-code)
6. [Exemple de sortie](#exemple-de-sortie)
7. [Contributions](#contributions)
8. [Licence](#licence)

---

## **Fonctionnalités**
Ce projet implémente plusieurs opérations sur les listes doublement chaînées :
- Création d'une liste doublement chaînée.
- Ajout d'un nœud :
  - Au début de la liste.
  - À la fin de la liste.
  - À une position spécifique.
- Suppression d'un nœud :
  - Au début de la liste.
  - À la fin de la liste.
  - À une position spécifique.
- Parcours et affichage des éléments dans les deux directions (avant et arrière).
- Recherche d'un élément dans la liste.
- Libération de toute la mémoire utilisée par la liste.

---

## **Prérequis**
Avant de commencer, assurez-vous d'avoir :
- Un compilateur C (comme GCC).
- Un éditeur de texte ou un IDE (Visual Studio Code, Code::Blocks, etc.).
- Une connaissance de base des pointeurs et des structures en C.

---

## **Installation**
1. Clonez ce dépôt :
   ```bash
   git clone https://github.com/votre-utilisateur/doubly-linked-lists.git
   ```
2. Accédez au dossier du projet :
   ```bash
   cd doubly-linked-lists
   ```
3. Compilez le code source avec GCC :
   ```bash
   gcc -Wall -Wextra -Werror -pedantic *.c -o doubly_linked_lists
   ```
4. Exécutez le programme compilé :
   ```bash
   ./doubly_linked_lists
   ```

---

## **Utilisation**
Le programme permet d'effectuer plusieurs opérations sur une liste doublement chaînée. Voici quelques exemples d'utilisation :

### Ajouter des éléments
Ajoutez des éléments au début, à la fin ou à une position spécifique dans la liste.

### Supprimer des éléments
Supprimez facilement des nœuds au début, à la fin ou à une position spécifique.

### Parcourir et afficher
Affichez les éléments dans l'ordre normal ou en ordre inversé.

### Exemple d'appel de fonction
```c
add_dnodeint(&head, 10); // Ajoute 10 au début
add_dnodeint_end(&head, 20); // Ajoute 20 à la fin
print_list(head); // Affiche : 10 -> 20
```

---

## **Structure du code**
### Exemple de structure pour un nœud dans une liste doublement chaînée :
```c
typedef struct dlistint_s
{
    int n;                      // Données du nœud
    struct dlistint_s *prev;    // Pointeur vers le nœud précédent
    struct dlistint_s *next;    // Pointeur vers le nœud suivant
} dlistint_t;
```

### Fonctions principales :
1. `add_dnodeint(dlistint_t **head, int n)` : Ajoute un nouveau nœud au début.
2. `add_dnodeint_end(dlistint_t **head, int n)` : Ajoute un nouveau nœud à la fin.
3. `delete_dnodeint_at_index(dlistint_t **head, unsigned int index)` : Supprime un nœud à une position donnée.
4. `print_list(const dlistint_t *h)` : Parcourt et affiche tous les éléments de la liste.

---

## **Exemple de sortie**
Voici un exemple de fonctionnement du programme :

```
Ajout au début : 10
Ajout à la fin : 20
Ajout au début : 5
Liste actuelle : 5  10  20

Suppression du premier élément...
Liste actuelle : 10  20

Suppression du dernier élément...
Liste actuelle : 10

Fin du programme !
```

---

## **Contributions**
Les contributions sont les bienvenues ! Si vous souhaitez améliorer ce projet ou ajouter des fonctionnalités, veuillez ouvrir une *issue* ou soumettre une *pull request*.

---

## **Licence**
Ce projet est sous licence MIT. Vous êtes libre de l'utiliser, le modifier et le distribuer tant que vous incluez une copie de cette licence.
