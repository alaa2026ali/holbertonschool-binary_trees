#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, 0 if NULL
 */
static int tree_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	/* nothing here */
	if (tree == NULL)
		return (0);

	/* go down left */
	left_h = tree_height(tree->left);

	/* go down right */
	right_h = tree_height(tree->right);

	/* pick the taller side and add 1 for this level */
	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	/* get both sides height */
	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);

	/* not the same height = not perfect */
	if (left_h != right_h)
		return (0);

	/* leaf = perfect on its own */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* check both kids are perfect too */
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
