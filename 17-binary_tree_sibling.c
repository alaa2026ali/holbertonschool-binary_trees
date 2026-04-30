#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node,
 *         NULL if node is NULL, parent is NULL, or node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if the node or its parent is NULL */
	if (!node || !node->parent)
		return (NULL);

	/*
	 * If the current node is the left child, return the right child.
	 * Otherwise, return the left child.
	 */
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
