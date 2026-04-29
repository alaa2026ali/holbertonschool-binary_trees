#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree (0 if tree is NULL or a leaf)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l, r;

if (tree == NULL)
return (0);

l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return (l > r ? l : r);
}
