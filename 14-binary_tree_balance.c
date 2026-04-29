#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree (Node-based)
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the tree, 0 if tree is NULL
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_subtree_height;
	size_t right_subtree_height;

	if (tree == NULL)
		return (0);

	left_subtree_height = tree_height(tree->left);
	right_subtree_height = tree_height(tree->right);

	return ((left_subtree_height > right_subtree_height
		? left_subtree_height
		: right_subtree_height) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_subtree_height;
	int right_subtree_height;

	if (tree == NULL)
		return (0);

	left_subtree_height = (int)tree_height(tree->left);
	right_subtree_height = (int)tree_height(tree->right);

	return (left_subtree_height - right_subtree_height);
}
