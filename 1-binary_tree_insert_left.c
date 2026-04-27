#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent
 * @parent: pointer to the parent node
 * @value: value of the new node
 *
 * Return: pointer to the new node, or NULL on failure
 *
 * Description:
 * If the parent already has a left child, the existing left child
 * becomes the left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    /* Check if parent exists */
    if (parent == NULL)
        return (NULL);

    /* Create new node */
    node = binary_tree_node(parent, value);
    if (node == NULL)
        return (NULL);

    /* If parent already has a left child */
    if (parent->left != NULL)
    {
        /* Move existing left child under new node */
        node->left = parent->left;

        /* Update parent pointer of moved node */
        parent->left->parent = node;
    }

    /* Attach new node as left child */
    parent->left = node;

    return (node);
}
