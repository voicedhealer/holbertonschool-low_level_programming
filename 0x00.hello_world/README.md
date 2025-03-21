# 0x00. C - Hello, World

Ce projet est une introduction au langage de programmation C et aux bases de la compilation.

## Objectifs d'apprentissage

À la fin de ce projet, vous devriez être capable de :

- Comprendre le processus de compilation en C
- Utiliser les commandes `gcc`, `printf`, `puts`, et `putchar`
- Connaître la structure de base d'un programme C
- Comprendre le rôle de la fonction `main`
- Utiliser les commentaires en C
- Suivre le style de codage de Betty
- Trouver la bonne longueur d'une ligne de code en C
- Utiliser les variables et les types de base en C

## Fichiers du projet

- `0-preprocessor` : Script shell qui exécute le préprocesseur C
- `1-compiler` : Script shell qui compile un fichier C sans le lier
- `2-assembler` : Script shell qui génère le code assembleur d'un code C
- `3-name` : Script shell qui compile un fichier C et crée un exécutable nommé `cisfun`
- `4-puts.c` : Programme C qui imprime une phrase spécifique
- `5-printf.c` : Programme C qui imprime une phrase spécifique en utilisant `printf`
- `6-size.c` : Programme C qui imprime la taille de divers types
- `100-intel` : Script shell qui génère le code assembleur (syntaxe Intel) d'un code C
- `101-quote.c` : Programme C qui imprime une phrase spécifique sur la sortie d'erreur standard

## Compilation

Tous les programmes C ont été compilés sur Ubuntu 20.04 LTS en utilisant gcc avec les options suivantes :

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Utilisation

Pour exécuter les scripts shell :

```
./nom_du_script
```

Pour compiler et exécuter les programmes C :

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 nom_du_fichier.c -o nom_executable
./nom_executable
```

## Auteur

Bernardot Vivien

## Ressources supplémentaires

- [Everything you need to know to start with C.pdf](lien_vers_le_pdf)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- ["C" Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)

---