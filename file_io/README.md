projet C - File I/O

---

# **C - File I/O**

## **Description**
Ce projet explore les fonctionnalités de gestion des fichiers en langage C, notamment la lecture, l'écriture, et la manipulation des fichiers via des appels système. Vous apprendrez à utiliser les fonctions comme `open()`, `read()`, `write()`, et `close()` pour interagir avec le système de fichiers.

---

## **Table des matières**
1. [Objectifs](#objectifs)
2. [Prérequis](#prérequis)
3. [Fonctionnalités](#fonctionnalités)
4. [Installation](#installation)
5. [Utilisation](#utilisation)
6. [Exemples de sortie](#exemples-de-sortie)
7. [Contributions](#contributions)
8. [Auteurs](#auteurs)

---

## **Objectifs**
- Comprendre les appels système liés aux fichiers (`open`, `read`, `write`, etc.).
- Apprendre à manipuler des fichiers en C (création, suppression, modification).
- Utiliser les permissions et modes d'accès pour gérer les fichiers.
- Optimiser la gestion des erreurs lors des opérations sur les fichiers.

---

## **Prérequis**
Avant de commencer, assurez-vous d'avoir :
- Un compilateur C (comme GCC).
- Des connaissances de base en programmation C (fonctions, boucles, conditions).
- Une compréhension des systèmes de fichiers sous Linux.

---

## **Fonctionnalités**
Les fonctions implémentées dans ce projet incluent :
1. **Gestion des fichiers** :
   - Ouvrir un fichier avec `open()`.
   - Lire le contenu d'un fichier avec `read()`.
   - Écrire dans un fichier avec `write()`.
   - Fermer un fichier avec `close()`.

2. **Manipulation avancée** :
   - Gestion des erreurs lors des opérations sur les fichiers.
   - Utilisation des modes d'accès (`O_RDONLY`, `O_WRONLY`, `O_RDWR`).

3. **Applications pratiques** :
   - Copier le contenu d'un fichier dans un autre.
   - Modifier les permissions d'un fichier.
   - Créer un fichier temporaire.

---

## **Installation**
1. Clonez ce dépôt :
   ```bash
   git clone https://github.com/votre-utilisateur/c-file-io.git
   ```
2. Accédez au dossier du projet :
   ```bash
   cd c-file-io
   ```
3. Compilez le code source avec GCC :
   ```bash
   gcc -Wall -pedantic -Werror -Wextra *.c -o file_io
   ```

---

## **Utilisation**
Le programme contient plusieurs fonctions que vous pouvez tester individuellement ou via un fichier principal (`main.c`). Voici quelques exemples d'utilisation :

### Exemple 1 : Lire un fichier
```c
#include 
#include 
#include 

int main(void)
{
    int fd;
    char buffer[1024];
    ssize_t bytes_read;

    fd = open("example.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }

    bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read == -1)
    {
        perror("Error reading file");
        close(fd);
        return (1);
    }

    buffer[bytes_read] = '\0';
    printf("File content:\n%s\n", buffer);

    close(fd);
    return (0);
}
```

### Exemple 2 : Écrire dans un fichier
```c
#include 
#include 
#include 

int main(void)
{
    int fd;
    char *text = "Hello, world!\n";

    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }

    if (write(fd, text, 14) == -1)
    {
        perror("Error writing to file");
        close(fd);
        return (1);
    }

    printf("Text written successfully.\n");

    close(fd);
    return (0);
}
```

---

## **Exemples de sortie**

### Exemple 1 : Lecture d'un fichier
Entrée :  
Un fichier nommé `example.txt` contenant :
```
Bonjour tout le monde !
```

Sortie :  
```
File content:
Bonjour tout le monde !
```

### Exemple 2 : Écriture dans un fichier
Entrée :  
Un texte à écrire dans le fichier.

Sortie :  
```
Text written successfully.
```

---

## **Contributions**
Les contributions sont les bienvenues ! Si vous souhaitez améliorer ce projet ou ajouter des fonctionnalités, veuillez ouvrir une *issue* ou soumettre une *pull request*.

---

## **Auteurs**
- [Votre nom ou pseudo GitHub]
- Projet réalisé dans le cadre du cursus Holberton School.

---

Avec ce fichier README structuré, votre projet sera bien documenté et facile à comprendre pour les utilisateurs et les contributeurs ! 😊

Citations:
[1] https://ppl-ai-file-upload.s3.amazonaws.com/web/direct-files/53127066/636a55e9-d577-4d60-b4e3-e82722b3ef37/paste-1.txt
[2] https://ppl-ai-file-upload.s3.amazonaws.com/web/direct-files/53127066/c7c325a6-6179-4bc3-8cf4-fc00a83fd9b2/paste-2.txt
[3] https://ppl-ai-file-upload.s3.amazonaws.com/web/direct-files/53127066/5ab6aad8-9767-40f2-adc2-813ed523bc37/paste-3.txt
[4] https://ppl-ai-file-upload.s3.amazonaws.com/web/direct-files/53127066/e03ceb73-51fb-4417-a1dc-0f99554bab7c/paste-4.txt
[5] https://ppl-ai-file-upload.s3.amazonaws.com/web/direct-files/53127066/57d14c4b-76ad-43b8-8479-d6ee51d6ab2c/paste-5.txt

---