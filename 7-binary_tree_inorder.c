#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using inorder
 * @tree: pointer to the root node
 * @func: function to apply to each node value
 *
 * Description:
 * Inorder traversal visits nodes in this order:
 * left subtree -> root -> right subtree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if tree or function is NULL */
    if (tree == NULL || func == NULL)
        return;

    /* Traverse left subtree first */
    binary_tree_inorder(tree->left, func);

    /* Visit the root node */
    func(tree->n);

    /* Traverse right subtree */
    binary_tree_inorder(tree->right, func);
}
