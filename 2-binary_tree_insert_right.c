#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child
 * @parent: pointer to the parent node
 * @value: value of the new node
 *
 * Return: pointer to the new node, or NULL on failure
 *
 * Description:
 * If the parent already has a right child, it will be moved
 * to become the right child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    /* Check if parent is NULL (invalid case) */
    if (parent == NULL)
        return (NULL);

    /* Create a new node and assign its parent */
    node = binary_tree_node(parent, value);

    /* If memory allocation fails, return NULL */
    if (node == NULL)
        return (NULL);

    /* If parent already has a right child */
    if (parent->right != NULL)
    {
        /* Move existing right child under the new node */
        node->right = parent->right;

        /* Update the parent pointer of the moved node */
        parent->right->parent = node;
    }

    /* Attach the new node as the right child of parent */
    parent->right = node;

    /* Return pointer to the newly created node */
    return (node);
}
