#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if not full or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* If it's a leaf node, return 1 */
	if (!tree->left && !tree->right)
		return (1);

	/* Use logical AND to check if both subtrees exist and are full */
	return (tree->left && tree->right &&
		binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
