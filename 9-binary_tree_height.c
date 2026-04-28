#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 *
 * Description:
 * Height is the number of edges on the longest path
 * from the node to a leaf.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;

 /* If tree is NULL, height is 0 */
if (tree == NULL)
return (0);

 /* Recursively get height of left subtree */
left_height = binary_tree_height(tree->left);
 /* Recursively get height of right subtree */
right_height = binary_tree_height(tree->right);
 /* Return the larger height + 1 (current node) */
if (left_height > right_height)
return (left_height + 1);
else
return (right_height + 1);
}
