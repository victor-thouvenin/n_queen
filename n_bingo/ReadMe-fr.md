# 🎯 N-Bingo

> Vous vous êtes déjà demandé combien de cases d'une grille de Bingo on peut remplir sans faire un seul Bingo ? Non ? Eh bien, moi, oui.

**N-Bingo** est un programme écrit en **C** qui cherche le nombre maximal de cases pouvant être remplies sur une grille de taille `n × n` sans compléter une seule combinaison gagnante.

La taille de la grille est fournie en paramètre.

---

## 🧩 Fonctionnalités

* Écrit en **C**
* Taille de grille personnalisable
* Recherche du nombre maximal de cases pouvant être remplies
* Détection des Bingos horizontaux, verticaux et sur les diagonales principales
* Interface en ligne de commande
* Un paramètre requis

---

## 🧠 Règles

Une grille est considérée comme gagnante dès qu'elle contient un **Bingo**, c'est à dire :

* une **ligne entièrement remplie**
* une **colonne entièrement remplie**
* une **diagonale principale entièrement remplie**

une diagonale principale relie deux coins opposés.

Le programme cherche donc à remplir le maximum de cases tout en évitant toutes ces configurations.

---

## ⚙️ Prérequis

* Un système compatible avec **GCC**
* **GCC (GNU Compiler Collection)**

Vérifier l'installation de GCC :

```bash
gcc --version
```

---

## 🛠️ Compilation

Compiler le programme avec GCC :

```bash
gcc -o n_bingo n_bingo.c
```

---

## 🚀 Utilisation

Le programme prend la taille de la grille comme unique paramètre :

```bash
./n_bingo [taille]
```

### Exemple

```bash
./n_bingo 5
```

Le programme affiche alors le **nombre maximal de cases pouvant être remplies sans obtenir de Bingo**.

---

## 📊 Exemple

Pour une grille `5 × 5`, le programme cherche une configuration de ce type :

```text
X X . X X
X X X . X
X . X X X
. X X X X
X X X X .
```

où `X` représente une case remplie et `.` une case vide.

Aucune ligne, colonne ou diagonale principale ne doit être entièrement remplie.

---

## 🎯 Objectif

Ce projet permet notamment d'explorer :

* la recherche exhaustive
* la gestion de contraintes
* l'optimisation d'algorithmes
* les problèmes de placement sur une grille

Le programme ne cherche pas une configuration particulière : il cherche **le nombre maximal de cases pouvant être remplies sans provoquer de Bingo**.
