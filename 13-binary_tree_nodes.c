#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child
 * @tree: pointer to the root node
 *
 * Return: number of nodes, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* If node has at least one child, count it */
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));

	/* Node is a leaf, don't count it */
	return (0);
}
