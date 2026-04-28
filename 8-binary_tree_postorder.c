#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using postorder
 * @tree: pointer to the root node
 * @func: function to apply to each node value
 *
 * Description:
 * Postorder traversal visits nodes in this order:
 * left subtree -> right subtree -> root
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if tree or function is NULL */
    if (tree == NULL || func == NULL)
        return;

    /* Traverse left subtree */
    binary_tree_postorder(tree->left, func);

    /* Traverse right subtree */
    binary_tree_postorder(tree->right, func);

    /* Visit the root node last */
    func(tree->n);
}
