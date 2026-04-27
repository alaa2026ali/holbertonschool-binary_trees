#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* 
 * Typedefs for different types of binary trees
 *
 * binary_tree_t: Generic binary tree (no specific rules)
 * bst_t: Binary Search Tree (values follow BST rules)
 * avl_t: AVL Tree (self-balancing binary search tree)
 * heap_t: Max Binary Heap (complete tree with heap property)
 *
 * Note: All of them use the same underlying structure (binary_tree_s)
 * but they differ in how nodes are organized and constrained.
 */
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Task 0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */
