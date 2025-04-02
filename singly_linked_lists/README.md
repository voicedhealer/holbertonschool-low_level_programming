# **C - Singly Linked Lists**

## **Description**
Ce projet implémente et explore les **listes chaînées simples** (*singly linked lists*) en langage C. Une liste chaînée simple est une structure de données dynamique où chaque nœud contient une valeur et un pointeur vers le nœud suivant. Ce projet inclut des fonctions pour créer, manipuler et parcourir une liste chaînée simple.

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
- Création d'une liste chaînée simple.
- Ajout d'un nœud :
  - Au début de la liste.
  - À la fin de la liste.
  - À une position spécifique.
- Suppression d'un nœud :
  - Au début de la liste.
  - À la fin de la liste.
  - À une position spécifique.
- Parcours et affichage des éléments de la liste.
- Recherche d'un élément dans la liste.
- Libération de la mémoire utilisée par la liste.

---

## **Prérequis**
Avant de commencer, assurez-vous d'avoir :
- Un compilateur C (comme GCC).
- Un éditeur de texte ou un IDE (Visual Studio Code, Code::Blocks, etc.).
- Une connaissance de base du langage C et des pointeurs.

---

## **Installation**
1. Clonez ce dépôt :
   ```bash
   git clone https://github.com/votre-utilisateur/singly-linked-lists.git
   ```
2. Accédez au dossier du projet :
   ```bash
   cd singly-linked-lists
   ```
3. Compilez le code source avec GCC :
   ```bash
   gcc -o linked_list linked_list.c
   ```
4. Exécutez le programme compilé :
   ```bash
   ./linked_list
   ```

---

## **Utilisation**
Le programme permet d'effectuer plusieurs opérations sur une liste chaînée simple :

1. Ajouter des éléments à différents endroits (début, fin, position spécifique).
2. Supprimer des éléments.
3. Afficher les éléments existants dans la liste.
4. Rechercher un élément dans la liste.

Vous pouvez modifier le fichier `linked_list.c` pour tester différentes fonctionnalités ou personnaliser les données.

---

## **Structure du code**
### Exemple de structure d'un nœud dans une liste chaînée simple :
```c
typedef struct Node {
    int data;               // Données stockées dans le nœud
    struct Node *next;      // Pointeur vers le prochain nœud
} Node;
```

### Fonctions principales :
1. `createNode(int data)` : Crée un nouveau nœud avec les données spécifiées.
2. `insertAtBeginning(Node **head, int data)` : Insère un nœud au début de la liste.
3. `insertAtEnd(Node **head, int data)` : Insère un nœud à la fin de la liste.
4. `deleteNode(Node **head, int position)` : Supprime un nœud à une position donnée.
5. `printList(Node *head)` : Parcourt et affiche tous les éléments de la liste.

---

## **Exemple de sortie**
Voici un exemple de fonctionnement du programme :

```
Choisissez une opération :
1. Ajouter au début
2. Ajouter à la fin
3. Supprimer un élément
4. Afficher la liste
5. Quitter

> 1
Entrez une valeur : 10

> 2
Entrez une valeur : 20

> 4
Liste actuelle : 10 -> 20 -> NULL

> 3
Entrez la position à supprimer : 1

> 4
Liste actuelle : 20 -> NULL

> 5
Programme terminé !
```
---