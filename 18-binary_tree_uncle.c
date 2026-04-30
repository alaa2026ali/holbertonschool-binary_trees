#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* A node cannot have an uncle if it is NULL or has no grandparent */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* 
	 * The uncle of a node is the sibling of its parent.
	 * If the parent is the left child of the grandparent, the uncle is the right child.
	 */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/*
	 * If the parent is the right child of the grandparent, the uncle is the left child.
	 */
	return (node->parent->parent->left);
}
