#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point to test binary_tree_node
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    /* Create root node */
    root = binary_tree_node(NULL, 98);

    /* Add children */
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);

    /* Add more nodes */
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    /* Print tree (if provided by project) */
    binary_tree_print(root);

    return (0);
}
