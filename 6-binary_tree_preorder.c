#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order
 * @tree: pointer to the root node
 * @func: function to call for each node
 *
 * Description:
 * Pre-order traversal visits nodes in this order:
 * root -> left -> right
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if tree or function is NULL */
if (tree == NULL || func == NULL)
return;

    /* Visit the root node */
func(tree->n);
    /* Traverse left subtree */
binary_tree_preorder(tree->left, func);
    /* Traverse right subtree */
binary_tree_preorder(tree->right, func);
}
