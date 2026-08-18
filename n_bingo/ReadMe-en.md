# 🎯 N-Bingo

> Have you ever wondered how many squares of a Bingo grid you can fill without getting a single Bingo? No? Well, I have.

**N-Bingo** is a **C** program that determines the maximum number of squares that can be filled on an `n × n` Bingo grid without completing a winning combination.

The grid size is provided as a command-line parameter.

---

## 🧩 Features

* Written in **C**
* Customizable grid size
* Finds the maximum number of squares that can be filled
* Detects horizontal, vertical, and main diagonal Bingos
* Command-line interface
* One required parameter

---

## 🧠 Rules

A grid contains a **Bingo** when it has a complete winning line.

In this program, a Bingo is:

* a completely filled **row**
* a completely filled **column**
* a completely filled **main diagonal**

A main diagonal connects two opposite corners.

The program therefore tries to fill as many squares as possible while avoiding all of these configurations.

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
gcc -o n_bingo n_bingo.c
```

---

## 🚀 Usage

The program takes the grid size as its only parameter:

```bash
./n_bingo [size]
```

### Example

```bash
./n_bingo 5
```

The program then outputs the **maximum number of squares that can be filled without getting a Bingo**.

---

## 📊 Example

For a `5 × 5` grid, the program searches for a configuration such as:

```text
X X . X X
X X X . X
X . X X X
. X X X X
X X X X .
```

where `X` represents a filled square and `.` represents an empty square.

No row, column, or main diagonal may be completely filled.

---

## 🎯 Purpose

This project explores concepts such as:

* Exhaustive search
* Constraint solving
* Algorithm optimization
* Grid-based placement problems

The program does not look for one particular configuration. Its goal is to determine **the maximum number of squares that can be filled without creating a Bingo**.
