# ♛ N-Queens

**N-Queens** is a **C** program that solves the **N-Queens problem** by determining the number of ways to place `n` queens on an `n × n` chessboard so that no queen can attack another.

The program takes the board size `n` as a parameter and outputs the **total number of valid solutions**.

---

## 🧩 Features

* Solves the **N-Queens problem**
* Written in **C**
* Customizable board size
* Places `n` queens on an `n × n` board
* Counts all valid configurations
* Command-line interface
* One required parameter

---

## 🧠 Rules

A configuration is valid if no two queens share:

* the same **row**
* the same **column**
* the same **diagonal**

The program searches through all possible configurations and counts the ones that satisfy these constraints.

### Example

For `n = 4`, there are **2 solutions**:

```text
. Q . .
. . . Q
Q . . .
. . Q .
```

and:

```text
. . Q .
Q . . .
. . . Q
. Q . .
```

---

## ⚙️ Requirements

* A system compatible with **GCC**
* **GCC (GNU Compiler Collection)**

Check your GCC installation:

```bash
gcc --version
```

---

## 🛠️ Compilation

Compile the program using GCC:

```bash
gcc -o nqueens n_queen.c
```

---

## 🚀 Usage

The program takes the board size as its only parameter:

```bash
./nqueens [n]
```

### Example

```bash
./nqueens 8
```

Output:

```text
92
```

The classic **8-Queens problem** therefore has **92 solutions**.

---

## 📊 Some Results

| Board size `n` | Number of solutions |
| -------------: | ------------------: |
|              1 |                   1 |
|              2 |                   0 |
|              3 |                   0 |
|              4 |                   2 |
|              5 |                  10 |
|              6 |                   4 |
|              7 |                  40 |
|              8 |                  92 |
|              9 |                 352 |
|             10 |                 724 |

---

## 🎯 Purpose

This project explores concepts such as:

* **Recursion**
* **Backtracking**
* Exhaustive search
* Constraint solving
* Search algorithm optimization

The goal of the program is to **count all solutions**, rather than simply finding one.
