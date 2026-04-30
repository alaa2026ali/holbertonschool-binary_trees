# Binary Trees Project

## Description
This project implements a set of functions to manipulate binary trees in C. It covers tree creation, traversal, and different operations such as: height, depth, size, leaves, nodes, balance, full trees, perfect trees, sibling, and uncle.

---

## Requirements
- Operating System: Ubuntu 20.04 LTS
- Compiler: GCC
- Language: C (GNU89 standard)
- Style: Betty style compliance
- No global variables allowed
- Maximum 5 functions per file

---

## Installation
Clone the repository:
```bash
git clone alaa2026ali/holbertonschool-binary_trees
```

Go to project directory:
```bash
cd holbertonschool-binary_trees
```

---

## Examples

**Create a node**
```c
binary_tree_t *root = binary_tree_node(NULL, 98);
```

**Check perfect tree**
```c
binary_tree_is_perfect(root);
```

**Find uncle**
```c
binary_tree_uncle(root->left->left);
```

---

## Testing

**Compile test file:**
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c main.c -o test
```

**Run program:**
```bash
./test
```

**Betty style check:**
```bash
betty-style *.c
betty-doc *.h
```

---
## Concepts Covered
- Binary Trees
- Recursion
- Tree Traversal
- Height and Depth
- Full and Perfect Trees
- Node Relationships (sibling, uncle)
---
## Authors

This project was developed by:

* **Alaa Aldwasari** 
* **Alraddadi Muhannad**
