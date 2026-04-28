#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is the root, 0 otherwise
 *
 * Description:
 * The root is the only node that has no parent.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    /* Check if node is NULL */
    if (node == NULL)
        return (0);

    /* Check if node has no parent */
    if (node->parent == NULL)
        return (1);

    /* Otherwise, it is not the root */
    return (0);
}
