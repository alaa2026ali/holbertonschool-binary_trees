# Binary Trees Project

This project focuses on implementing binary trees in C.

## Data Structure

We use a basic binary tree node defined as:

- integer value (n)
- pointer to parent node
- pointer to left child
- pointer to right child

We also typedef the structure for:
- binary tree
- binary search tree
- AVL tree
- Max binary heap

## Files

- binary_trees.h → header file containing structures and prototypes
- 0-binary_tree_node.c → function to create a new node

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_tree
