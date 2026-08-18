# ♛ N-Reines

**N-Reines** est un programme de résolution du problème des **N-Reines**, écrit en C. Il détermine le nombre de possibilités de placer `n` reines sur un échiquier de taille `n × n` sans qu'aucune reine ne puisse en attaquer une autre.

Le programme prend la taille `n` de l'échiquier en paramètre et retourne le **nombre total de solutions**.

---

## 🧩 Fonctionnalités

* Résolution du problème des **N-Reines**
* Écrit en **C**
* Taille de l'échiquier personnalisable
* `n` reines placées sur un échiquier `n × n`
* Comptage de toutes les configurations valides
* Interface en ligne de commande
* Un seul paramètre requis

---

## 🧠 Règles

Une configuration est valide si aucune paire de reines ne partage :

* une même **ligne**
* une même **colonne**
* une même **diagonale**

Le programme cherche toutes les configurations possibles et compte celles qui respectent ces contraintes.

### Exemple

Pour `n = 4`, il existe **2 solutions** :

```text
. Q . .
. . . Q
Q . . .
. . Q .
```

et :

```text
. . Q .
Q . . .
. . . Q
. Q . .
```

---

## ⚙️ Prérequis

* Un système compatible avec **GCC**
* **GCC** (GNU Compiler Collection)

Vérifier l'installation de GCC :

```bash
gcc --version
```

---

## 🛠️ Compilation

Compiler le programme avec GCC :

```bash
gcc -o nqueens n_queen.c
```

## ⚙️ Utilisation

Le programme prend la taille de l'échiquier en unique paramètre :

```bash
./nqueens [n]
```

### Exemple

```bash
./nqueens 8
```

Résultat :

```text
92
```

Le problème classique des **8 reines** possède donc **92 solutions**.

---

## 📊 Quelques résultats

| Taille `n` | Nombre de solutions |
| ---------: | ------------------: |
|          1 |                   1 |
|          2 |                   0 |
|          3 |                   0 |
|          4 |                   2 |
|          5 |                  10 |
|          6 |                   4 |
|          7 |                  40 |
|          8 |                  92 |
|          9 |                 352 |
|         10 |                 724 |

---

## 🎯 Objectif

Ce projet permet notamment d'explorer :

* la **récursivité**
* le **backtracking**
* la recherche exhaustive
* la gestion de contraintes
* l'optimisation d'algorithmes de recherche

Le but du programme est de **compter les solutions**, et non simplement d'en trouver une.
