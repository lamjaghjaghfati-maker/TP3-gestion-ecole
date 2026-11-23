
# TP3 - Systeme de gestion academique

## 1. Presentation du projet

Ce projet consiste a developper une application modulaire en langage C pour la gestion academique des etudiants.

L'application permet d'afficher les informations des etudiants, de calculer leur moyenne generale et de determiner leur mention.

## 2. Objectifs

- Utiliser les structures en langage C.
- Organiser le projet en plusieurs fichiers.
- Calculer la moyenne des etudiants.
- Determiner la mention academique.
- Utiliser la compilation separee avec GCC.

## 3. Architecture du projet

```text
gestion_ecole/
|
|-- include/
|   |-- etudiant.h
|   |-- stats.h
|
|-- src/
|   |-- etudiant.c
|   |-- stats.c
|   |-- main.c
|
|-- build/
|
|-- README.md
```

## 4. Fonctionnalites

- Affichage des informations des etudiants.
- Affichage des quatre notes.
- Calcul de la moyenne generale.
- Determination de la mention.

## 5. Compilation

```bash
gcc -Wall -Wextra -Iinclude -c src/stats.c -o build/stats.o

gcc -Wall -Wextra -Iinclude -c src/etudiant.c -o build/etudiant.o

gcc -Wall -Wextra -Iinclude -c src/main.c -o build/main.o

gcc build/main.o build/etudiant.o build/stats.o -o build/gestion_scolaire.exe
```

## 6. Execution

```bash
.\build\gestion_scolaire.exe
```

## 7. Technologies utilisees

- Langage C
- GCC
- Visual Studio Code
- Git et GitHub

## 8. Auteur

Projet realise dans le cadre du TP3 de Programmation C Avancee.
